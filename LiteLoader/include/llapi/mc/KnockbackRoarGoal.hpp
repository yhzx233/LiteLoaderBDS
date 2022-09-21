/**
 * @file  KnockbackRoarGoal.hpp
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
 * @brief MC class KnockbackRoarGoal.
 *
 */
class KnockbackRoarGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KNOCKBACKROARGOAL
public:
    class KnockbackRoarGoal& operator=(class KnockbackRoarGoal const &) = delete;
    KnockbackRoarGoal(class KnockbackRoarGoal const &) = delete;
    KnockbackRoarGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1735246346
     */
    virtual ~KnockbackRoarGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@KnockbackRoarGoal@@UEAA_NXZ
     * @hash   1518679028
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@KnockbackRoarGoal@@UEAA_NXZ
     * @hash   1348872130
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@KnockbackRoarGoal@@UEAAXXZ
     * @hash   -61092499
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@KnockbackRoarGoal@@UEAAXXZ
     * @hash   -1149540931
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@KnockbackRoarGoal@@UEAAXXZ
     * @hash   -34824344
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@KnockbackRoarGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   412362316
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0KnockbackRoarGoal@@QEAA@AEAVMob@@@Z
     * @hash   -1527210943
     */
    MCAPI KnockbackRoarGoal(class Mob &);

};