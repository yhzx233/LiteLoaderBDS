#include "EngineManager.h"
#include "EngineOwnData.h"
#include "GlobalShareData.h"
#include <Utils/STLHelper.h>
#include <map>
using namespace std;
using namespace script;

///////////////////////////////// API /////////////////////////////////

bool EngineManager::unRegisterEngine(ScriptEngine* toDelete)
{
    for(auto engine = globalShareData->globalEngineList.begin(); engine != globalShareData->globalEngineList.end(); ++engine)
        if (*engine == toDelete)
        {
            globalShareData->globalEngineList.erase(engine);
            return true;
        }
    return false;
}

bool EngineManager::registerEngine(ScriptEngine* engine)
{
    globalShareData->globalEngineList.push_back(engine);
    return true;
}

ScriptEngine* EngineManager::newEngine(string pluginName)
{
    ScriptEngine* engine;

#if !defined(SCRIPTX_BACKEND_WEBASSEMBLY)
    engine = new ScriptEngineImpl();
#else
    engine = ScriptEngineImpl::instance();
#endif

    engine->setData(make_shared<EngineOwnData>());
    
    registerEngine(engine);
    if (!pluginName.empty())
        ENGINE_GET_DATA(engine)->pluginName = pluginName;
    return engine;
}

bool EngineManager::isValid(ScriptEngine* engine, bool onlyCheckLocal)
{
    for (auto i = globalShareData->globalEngineList.begin(); i != globalShareData->globalEngineList.end(); ++i)
        if (*i == engine)
        {
            if (onlyCheckLocal && getEngineType(engine) != LLSE_BACKEND_TYPE)
                return false;
            else
                return true;
        }
    return false;
}

std::vector<ScriptEngine*> EngineManager::getLocalEngines()
{
    std::vector<ScriptEngine*> res;
    for (auto& engine : globalShareData->globalEngineList)
    {
        if (getEngineType(engine) == LLSE_BACKEND_TYPE)
            res.push_back(engine);
    }
    return res;
}

std::vector<ScriptEngine*> EngineManager::getGlobalEngines()
{
    std::vector<ScriptEngine*> res;
    for (auto& engine : globalShareData->globalEngineList)
    {
        res.push_back(engine);
    }
    return res;
}

ScriptEngine* EngineManager::getEngine(std::string name, bool onlyLocalEngine)
{
    for (auto& engine : globalShareData->globalEngineList)
    {
        if (onlyLocalEngine && getEngineType(engine) != LLSE_BACKEND_TYPE)
            continue;
        if (ENGINE_GET_DATA(engine)->pluginName == name)
            return engine;
    }
    return nullptr;
}

std::string EngineManager::getEngineType(ScriptEngine* engine)
{
    return ENGINE_GET_DATA(engine)->engineType;
}