/**
 * @file  FertilizeFarmBlockGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FertilizeFarmBlockGoal.
 *
 */
class FertilizeFarmBlockGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FERTILIZEFARMBLOCKGOAL
public:
    class FertilizeFarmBlockGoal& operator=(class FertilizeFarmBlockGoal const &) = delete;
    FertilizeFarmBlockGoal(class FertilizeFarmBlockGoal const &) = delete;
    FertilizeFarmBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1021698212
     */
    virtual ~FertilizeFarmBlockGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@FertilizeFarmBlockGoal@@UEAA_NXZ
     * @hash   729952454
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@FertilizeFarmBlockGoal@@UEAA_NXZ
     * @hash   -861802268
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@FertilizeFarmBlockGoal@@UEAAXXZ
     * @hash   -190018209
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@FertilizeFarmBlockGoal@@UEAAXXZ
     * @hash   -1888083745
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@FertilizeFarmBlockGoal@@UEAAXXZ
     * @hash   1679276250
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@FertilizeFarmBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -402177222
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1402013944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1352071735
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  11
     * @symbol ?isValidTarget@FertilizeFarmBlockGoal@@MEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -796426431
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ??0FertilizeFarmBlockGoal@@QEAA@AEAVMob@@@Z
     * @hash   -1874832029
     */
    MCAPI FertilizeFarmBlockGoal(class Mob &);

//protected:
    /**
     * @symbol ?tryFertilizeCrop@FertilizeFarmBlockGoal@@IEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1959881498
     */
    MCAPI bool tryFertilizeCrop(class BlockSource &, class BlockPos const &);

//private:
    /**
     * @symbol ?_findFertilizer@FertilizeFarmBlockGoal@@AEAA_NXZ
     * @hash   -354675434
     */
    MCAPI bool _findFertilizer();

protected:

private:

};