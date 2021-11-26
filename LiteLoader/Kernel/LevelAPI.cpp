#include "Global.h"
#include <string>
#include <vector>
#include <MC/Block.hpp>
#include <MC/Actor.hpp>
#include <MC/ItemStack.hpp>
#include <MC/Spawner.hpp>
#include <MC/Level.hpp>
#include <MC/Dimension.hpp>
#include <MC/ItemActor.hpp>
#include <MC/BlockSource.hpp>
#include <MC/MinecraftCommands.hpp>
#include <MC/CommandContext.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/ActorDamageSource.hpp>
#include <command/CommandReg.h>

Actor* Level::fetchEntity(struct ActorUniqueID a0, bool a1) {
	class Actor* (Level:: * rv)(struct ActorUniqueID, bool) const;
	*((void**)&rv) = dlsym("?fetchEntity@Level@@UEBAPEAVActor@@UActorUniqueID@@_N@Z");
	return (Global<Level>->*rv)(std::forward<struct ActorUniqueID>(a0), std::forward<bool>(a1));
}

Dimension* Level::getDimension(class AutomaticID<class Dimension, int> a0) {
	class Dimension* (Level:: * rv)(class AutomaticID<class Dimension, int>) const;
	*((void**)&rv) = dlsym("?getDimension@Level@@UEBAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z");
	return (Global<Level>->*rv)(std::forward<class AutomaticID<class Dimension, int>>(a0));
}

void Level::forEachPlayer(class std::function<bool(class Player&)> a0) {
	void (Level:: * rv)(class std::function<bool(class Player&)>);
	*((void**)&rv) = dlsym("?forEachPlayer@Level@@UEAAXV?$function@$$A6A_NAEAVPlayer@@@Z@std@@@Z");
	return (Global<Level>->*rv)(std::forward<class std::function<bool(class Player&)>>(a0));
}

void Level::forEachPlayer(class std::function<bool(class Player const&)> a0) {
	void (Level:: * rv)(class std::function<bool(class Player const&)>) const;
	*((void**)&rv) = dlsym("?forEachPlayer@Level@@UEBAXV?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z");
	return (Global<Level>->*rv)(std::forward<class std::function<bool(class Player const&)>>(a0));
}
bool Level::destroyBlock(class BlockSource& a0, class BlockPos const& a1, bool a2) {
    bool (Level::*rv)(class BlockSource&, class BlockPos const&, bool);
    *((void**)&rv) = dlsym("?destroyBlock@Level@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z");
    return (Global<Level>->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<bool>(a2));
}
void Level::spawnParticleEffect(std::string const& a0, class Actor const& a1, class Vec3 const& a2) {
    void (Level::*rv)(std::string const&, class Actor const&, class Vec3 const&);
    *((void**)&rv) = dlsym("?spawnParticleEffect@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@AEBVVec3@@@Z");
    return (Global<Level>->*rv)(std::forward<std::string const&>(a0), std::forward<class Actor const&>(a1), std::forward<class Vec3 const&>(a2));
}

void Level::spawnParticleEffect(std::string const& a0, class Vec3 const& a1, class Dimension* a2) {
    void (Level::*rv)(std::string const&, class Vec3 const&, class Dimension*);
    *((void**)&rv) = dlsym("?spawnParticleEffect@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@PEAVDimension@@@Z");
    return (Global<Level>->*rv)(std::forward<std::string const&>(a0), std::forward<class Vec3 const&>(a1), std::forward<class Dimension*>(a2));
}
BlockSource* Level::getBlockSource(int dimid) {
	auto dim = Global<Level>->getDimension(dimid);
    return &dim->getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD();
	//return dAccess<BlockSource*>(dim, 96);
}

BlockSource* Level::getBlockSource(Actor* ac) {
    return (BlockSource*)*((__int64*)ac + 108);
}

bool Level::setBlock(IntVec4 pos, Block* block) {
	BlockSource* bs = getBlockSource(pos.dim);
	BlockPos bp{ pos.x, pos.y, pos.z };
	return bs->setBlock(bp, *block, 3, nullptr);       // updateFlag = 3 from IDA SetBlockCommand::execute()
}

bool Level::setBlock(IntVec4 pos, const string& name, unsigned short tileData) {
	Block* newBlock = Block::create(name, tileData);
	if (!newBlock)
		return false;
	return setBlock(pos, newBlock);
}

bool Level::setBlock(IntVec4 pos, Tag* nbt) {
	Block* newBlock = Block::create(nbt);
	if (!newBlock)
		return false;
	return setBlock(pos, newBlock);
}

Actor* Level::getDamageSourceEntity(ActorDamageSource* ads) {
	char v83;
    ActorUniqueID v6 = ads->getDamagingEntityUniqueID();
	return Global<Level>->fetchEntity(v6, 0);
}

void* Level::ServerCommandOrigin::fake_vtbl[26];
static_assert(offsetof(Level::ServerCommandOrigin, Perm) == 64);

bool Level::runcmd(const string& cmd) {
	ServerCommandOrigin origin;
	return MinecraftCommands::_runcmd(&origin, cmd);
}

static std::unordered_map<void*, string*> origin_res;
std::pair<bool, string> Level::runcmdEx(const string& cmd) {
	ServerCommandOrigin origin;
	string val;
	origin_res[&origin] = &val;
	bool rv = MinecraftCommands::_runcmd(&origin, cmd);
	return { rv, std::move(val) };
}

static void* FAKE_PORGVTBL[26];
bool Level::runcmdAs(Player* pl, const string& cmd) {
	void** filler[5];
	ServerCommandOrigin origin;
	SymCall("??0PlayerCommandOrigin@@QEAA@AEAVPlayer@@@Z", void, void*, ServerPlayer*)(
		filler, (ServerPlayer*)pl);
	if (FAKE_PORGVTBL[1] == NULL) {
		memcpy(FAKE_PORGVTBL, ((void**)filler[0]) - 1, sizeof(FAKE_PORGVTBL));
		FAKE_PORGVTBL[1] = (void*)dummy;
	}
	filler[0] = FAKE_PORGVTBL + 1;
	return MinecraftCommands::_runcmd(filler, cmd);
}

std::vector<Player*> Level::getAllPlayers(){
	std::vector<Player*> player_list;
	Global<Level>->forEachPlayer([&](Player& sp) -> bool {
		Player* player = &sp;
		player_list.push_back(player);
		return true;
	});
	return player_list;
}

Player* Level::getPlayer(const string& info)
{
	string target{ info };
	std::transform(target.begin(), target.end(), target.begin(), std::tolower);	//lower case the string
	int delta = 2147483647;	//c++ int max
	Player* found = nullptr;

	Global<Level>->forEachPlayer([&](Player& sp) -> bool{
		Player* p = &sp;
		if (p->getXuid() == target)
		{
			found = p;
			return false;
		}

		string pName = p->getRealName();
		std::transform(pName.begin(), pName.end(), pName.begin(), ::tolower);

		//模糊匹配
		if (pName.find(target) == 0)
		{
			//0 ís the index where the "target" appear in "pName"
			int curDelta = pName.length() - target.length();
			if (curDelta == 0)
			{
				found = p;
				return false;
			}

			if (curDelta < delta) {
				found = p;
				delta = curDelta;
			}
		}
		return true;
	});
	return found;
}

bool Level::breakNaturally(BlockSource* a1, BlockPos& a2) {
    Block* block = const_cast<Block*>(&a1->getBlock(a2));
    auto out = Global<Level>->destroyBlock(*a1, a2, 1);
    return out;
}

bool Level::breakNaturally(BlockSource* a1, BlockPos& a2, ItemStack* tool) {
    Block* block = const_cast<Block*>(&a1->getBlock(a2));
    bool canDestroy =  tool->canDestroy(block);
	if (canDestroy) {
        auto out = Global<Level>->destroyBlock(*a1, a2, 1);
	}
    auto out = Global<Level>->destroyBlock(*a1, a2, 0);
    return out;
}

ItemStack* Level::getItemStackFromId(short a2, int a3) {
    Item* itemcreate = (Item*)new char[552];
    Item* item = SymCall("??0Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z", Item*, Item*, string, short)(itemcreate, "", a2);
    ItemStack* a = (ItemStack*)new char[272];
    ItemStack* itemstackcreate = SymCall("??0ItemStack@@QEAA@XZ", ItemStack*, ItemStack*)(a);
    ItemStack* itemstack = SymCall("??0ItemStack@@QEAA@AEBVItem@@HH@Z", ItemStack*, ItemStack*, Item&,int,int)(itemstackcreate, *item,1,a3);
    return itemstack;
}