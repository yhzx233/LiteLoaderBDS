/**
 * @file  StairBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StairBlock.
 *
 */
class StairBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STAIRBLOCK
public:
    class StairBlock& operator=(class StairBlock const &) = delete;
    StairBlock(class StairBlock const &) = delete;
    StairBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1833352562
     */
    virtual ~StairBlock();
    /**
     * @vftbl  9
     * @symbol ?addAABBs@StairBlock@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
     * @hash   -235751276
     */
    virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @vftbl  11
     * @symbol ?addCollisionShapes@StairBlock@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     * @hash   -1896427831
     */
    virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  13
     * @symbol ?getOutline@StairBlock@@UEBAAEBVAABB@@AEAVBlockSource@@AEBVBlockPos@@AEAV2@@Z
     * @hash   37268727
     */
    virtual class AABB const & getOutline(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @vftbl  14
     * @symbol ?getLiquidClipVolume@StairBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
     * @hash   -1885768772
     */
    virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @vftbl  17
     * @symbol ?liquidCanFlowIntoFromDirection@StairBlock@@UEBA_NEAEBV?$function@$$A6AAEBVBlock@@AEBVBlockPos@@@Z@std@@AEBVBlockPos@@@Z
     * @hash   -1909855401
     */
    virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const & (class BlockPos const &)> const &, class BlockPos const &) const;
    /**
     * @vftbl  19
     * @hash   -327659668
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  22
     * @symbol ?canProvideSupport@StairBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     * @hash   -2046649517
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum class BlockSupportType) const;
    /**
     * @vftbl  25
     * @symbol ?canConnect@StairBlock@@UEBA_NAEBVBlock@@E0@Z
     * @hash   -1050703253
     */
    virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
    /**
     * @vftbl  29
     * @hash   -299030517
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -278713055
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -276866013
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -275942492
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -275018971
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -273171929
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -278983096
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -271324887
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -270401366
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -250083904
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -248236862
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -246389820
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -245466299
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -244542778
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -243619257
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -242695736
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -241772215
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  59
     * @hash   -213143064
     */
    virtual void __unk_vfn_59();
    /**
     * @vftbl  60
     * @hash   -192825602
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  78
     * @symbol ?getRedstoneProperty@StairBlock@@UEBA?AW4BlockProperty@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1799161451
     */
    virtual enum class BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  80
     * @hash   -135567300
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  87
     * @symbol ?mayPick@StairBlock@@UEBA_NXZ
     * @hash   987371770
     */
    virtual bool mayPick() const;
    /**
     * @vftbl  88
     * @symbol ?mayPick@StairBlock@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
     * @hash   1186374341
     */
    virtual bool mayPick(class BlockSource const &, class Block const &, bool) const;
    /**
     * @vftbl  89
     * @symbol ?mayPlace@StairBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   -1411784001
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  94
     * @symbol ?breaksFallingBlocks@StairBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     * @hash   1247926983
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @vftbl  95
     * @symbol ?destroy@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
     * @hash   1484245033
     */
    virtual void destroy(class BlockSource &, class BlockPos const &, class Block const &, class Actor *) const;
    /**
     * @vftbl  100
     * @symbol ?getResourceCount@StairBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     * @hash   710637514
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  101
     * @symbol ?getResourceItem@StairBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -22429422
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@StairBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1273286519
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  105
     * @hash   1332020102
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@StairBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   -565169597
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  109
     * @symbol ?attack@StairBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   -1203504265
     */
    virtual bool attack(class Player *, class BlockPos const &) const;
    /**
     * @vftbl  110
     * @symbol ?handleEntityInside@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@AEAVVec3@@@Z
     * @hash   -864299087
     */
    virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /**
     * @vftbl  124
     * @hash   1388354883
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @hash   1390201925
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @hash   1391125446
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @hash   1415136992
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl  147
     * @symbol ?getVariant@StairBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -346390988
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @hash   1442572581
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  152
     * @symbol ?animateTick@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1041008841
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  157
     * @hash   1477012899
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  165
     * @symbol ?onRemove@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -911970165
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  166
     * @symbol ?onExploded@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     * @hash   -794769065
     */
    virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @vftbl  167
     * @symbol ?onStandOn@StairBlock@@UEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
     * @hash   1810131138
     */
    virtual void onStandOn(class EntityContext &, class BlockPos const &) const;
    /**
     * @vftbl  168
     * @hash   1457546883
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @hash   1458470404
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @hash   1478787866
     */
    virtual void __unk_vfn_170();
    /**
     * @vftbl  171
     * @symbol ?onPlace@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1302958400
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  174
     * @symbol ?tick@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1183531894
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @hash   1534271201
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  178
     * @symbol ?clip@StairBlock@@UEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_N@Z
     * @hash   1995335126
     */
    virtual class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /**
     * @vftbl  179
     * @symbol ?use@StairBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   819243465
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  188
     * @hash   1563823873
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STAIRBLOCK
    /**
     * @symbol ?canBeSilkTouched@StairBlock@@MEBA_NXZ
     * @hash   -1498216029
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?isStairBlock@StairBlock@@UEBA_NXZ
     * @hash   1238753794
     */
    MCVAPI bool isStairBlock() const;
#endif
    /**
     * @symbol ??0StairBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVBlockLegacy@@H@Z
     * @hash   -1788090684
     */
    MCAPI StairBlock(std::string const &, int, class BlockLegacy const &, int);
    /**
     * @symbol ?setInnerPieceShape@StairBlock@@QEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEAVAABB@@_N@Z
     * @hash   -398462239
     */
    MCAPI bool setInnerPieceShape(class Block const &, class BlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @symbol ?setStepShape@StairBlock@@QEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEAVAABB@@_N@Z
     * @hash   -915738175
     */
    MCAPI bool setStepShape(class Block const &, class BlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @symbol ?stairDirectionToFacing@StairBlock@@SAEH@Z
     * @hash   805062518
     */
    MCAPI static unsigned char stairDirectionToFacing(int);

//protected:
    /**
     * @symbol ?shapeZFightShrink@StairBlock@@IEBAXAEAVAABB@@@Z
     * @hash   1794095580
     */
    MCAPI void shapeZFightShrink(class AABB &) const;

protected:

};