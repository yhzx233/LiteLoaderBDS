/**
 * @file  BellBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Direction.hpp"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BellBlockActor.
 *
 */
class BellBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BELLBLOCKACTOR
public:
    class BellBlockActor& operator=(class BellBlockActor const &) = delete;
    BellBlockActor(class BellBlockActor const &) = delete;
    BellBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -737837035
     */
    virtual ~BellBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@BellBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   2039783122
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@BellBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   828108577
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol ?tick@BellBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   412729163
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -383143003
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @hash   -379448919
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  28
     * @hash   -348972726
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @hash   -312330757
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -292013295
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -325884701
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -324961180
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -324037659
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol ?_getUpdatePacket@BellBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   1102227332
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  36
     * @symbol ?_onUpdatePacket@BellBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   -43227970
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0BellBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   144180542
     */
    MCAPI BellBlockActor(class BlockPos const &);
    /**
     * @symbol ?ejectItem@BellBlockActor@@QEBAXAEBVBlockPos@@AEAVActor@@@Z
     * @hash   -1978898353
     */
    MCAPI void ejectItem(class BlockPos const &, class Actor &) const;
    /**
     * @symbol ?isRinging@BellBlockActor@@QEBA_NXZ
     * @hash   721505290
     */
    MCAPI bool isRinging() const;
    /**
     * @symbol ?ring@BellBlockActor@@QEAA_NW4Type@Direction@@AEAVBlockSource@@PEAVActor@@_N@Z
     * @hash   1468360483
     */
    MCAPI bool ring(enum class Direction::Type, class BlockSource &, class Actor *, bool);

};