/**
 * @file  JigsawStructureRegistry.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JigsawStructureRegistry.
 *
 */
class JigsawStructureRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWSTRUCTUREREGISTRY
public:
    class JigsawStructureRegistry& operator=(class JigsawStructureRegistry const &) = delete;
    JigsawStructureRegistry(class JigsawStructureRegistry const &) = delete;
#endif

public:
    /**
     * @symbol ??0JigsawStructureRegistry@@QEAA@XZ
     * @hash   486836075
     */
    MCAPI JigsawStructureRegistry();
    /**
     * @symbol ?getJigsawStructureActorRulesRegistry@JigsawStructureRegistry@@QEAAAEAVJigsawStructureActorRulesRegistry@@XZ
     * @hash   -251382790
     */
    MCAPI class JigsawStructureActorRulesRegistry & getJigsawStructureActorRulesRegistry();
    /**
     * @symbol ?getJigsawStructureBlockRulesRegistry@JigsawStructureRegistry@@QEAAAEAVJigsawStructureBlockRulesRegistry@@XZ
     * @hash   -289864166
     */
    MCAPI class JigsawStructureBlockRulesRegistry & getJigsawStructureBlockRulesRegistry();
    /**
     * @symbol ?getJigsawStructureBlockTagRulesRegistry@JigsawStructureRegistry@@QEAAAEAVJigsawStructureBlockTagRulesRegistry@@XZ
     * @hash   1498765236
     */
    MCAPI class JigsawStructureBlockTagRulesRegistry & getJigsawStructureBlockTagRulesRegistry();
    /**
     * @symbol ?getJigsawStructureElementRegistry@JigsawStructureRegistry@@QEAAAEAVJigsawStructureElementRegistry@@XZ
     * @hash   1702784704
     */
    MCAPI class JigsawStructureElementRegistry & getJigsawStructureElementRegistry();
    /**
     * @symbol ?lookupByName@JigsawStructureRegistry@@QEBAPEBVStructureTemplatePool@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1913611218
     */
    MCAPI class StructureTemplatePool const * lookupByName(std::string) const;
    /**
     * @symbol ?registerPool@JigsawStructureRegistry@@QEAAX$$QEAV?$unique_ptr@VStructureTemplatePool@@U?$default_delete@VStructureTemplatePool@@@std@@@std@@@Z
     * @hash   1977928268
     */
    MCAPI void registerPool(std::unique_ptr<class StructureTemplatePool> &&);
    /**
     * @symbol ??1JigsawStructureRegistry@@QEAA@XZ
     * @hash   -1069107733
     */
    MCAPI ~JigsawStructureRegistry();

};