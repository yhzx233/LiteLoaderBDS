/**
 * @file  MinecraftGameTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftGameTest.
 *
 */
class MinecraftGameTest : public BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTGAMETEST
public:
    class MinecraftGameTest& operator=(class MinecraftGameTest const &) = delete;
    MinecraftGameTest(class MinecraftGameTest const &) = delete;
    MinecraftGameTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   425728959
     */
    virtual ~MinecraftGameTest();
    /**
     * @vftbl  1
     * @hash   -1408478591
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  3
     * @hash   -1406631549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1405708028
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  6
     * @hash   -1403860986
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  8
     * @hash   -1402013944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1401090423
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @hash   -384990045
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol ?addParticle@LevelListener@@UEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z
     * @hash   2090347414
     */
    virtual class Particle * addParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
    /**
     * @vftbl  12
     * @hash   -383143003
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -382219482
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @hash   -381295961
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @hash   -380372440
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @hash   -379448919
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @hash   -378525398
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  18
     * @hash   -377601877
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  19
     * @hash   -376678356
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @hash   -356360894
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  21
     * @hash   -355437373
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl  22
     * @hash   -354513852
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @hash   -353590331
     */
    virtual void __unk_vfn_23();
    /**
     * @vftbl  24
     * @hash   -352666810
     */
    virtual void __unk_vfn_24();
    /**
     * @vftbl  25
     * @hash   -351743289
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl  26
     * @symbol ?onLevelDestruction@MinecraftGameTest@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1331020617
     */
    virtual void onLevelDestruction(std::string const &);
    /**
     * @symbol ??0MinecraftGameTest@@QEAA@AEAVLevel@@@Z
     * @hash   1934818100
     */
    MCAPI MinecraftGameTest(class Level &);
    /**
     * @symbol ?clearAllTests@MinecraftGameTest@@QEAAXAEAVBlockSource@@@Z
     * @hash   -952909590
     */
    MCAPI void clearAllTests(class BlockSource &);
    /**
     * @symbol ?getRegistry@MinecraftGameTest@@QEAAAEAVGameTestRegistry@gametest@@XZ
     * @hash   1891828006
     */
    MCAPI class gametest::GameTestRegistry & getRegistry();
    /**
     * @symbol ?getTicker@MinecraftGameTest@@QEAAAEAVGameTestTicker@gametest@@XZ
     * @hash   179551728
     */
    MCAPI class gametest::GameTestTicker & getTicker();
    /**
     * @symbol ?loadExistingTests@MinecraftGameTest@@QEAAXAEAVLevel@@@Z
     * @hash   -615571972
     */
    MCAPI void loadExistingTests(class Level &);
    /**
     * @symbol ?registerDefaultGameBatches@MinecraftGameTest@@QEAAXAEAVLevel@@@Z
     * @hash   1632077662
     */
    MCAPI void registerDefaultGameBatches(class Level &);
    /**
     * @symbol ?registerNativeGameTests@MinecraftGameTest@@QEAAXXZ
     * @hash   -1689620305
     */
    MCAPI void registerNativeGameTests();
    /**
     * @symbol ?runTest@MinecraftGameTest@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@AEAVDimension@@AEBUTestParameters@gametest@@@Z
     * @hash   -1552352021
     */
    MCAPI std::string runTest(std::string const &, class Dimension &, struct gametest::TestParameters const &);
    /**
     * @symbol ?runTestAt@MinecraftGameTest@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@AEBVBlockPos@@V?$optional@W4Rotation@@@3@@Z
     * @hash   155716420
     */
    MCAPI std::string runTestAt(class BlockSource &, class BlockPos const &, class std::optional<enum class Rotation>);
    /**
     * @symbol ?runTests@MinecraftGameTest@@QEAAAEBV?$vector@V?$shared_ptr@VBaseGameTestInstance@gametest@@@std@@V?$allocator@V?$shared_ptr@VBaseGameTestInstance@gametest@@@std@@@2@@std@@AEAVDimension@@$$QEAUTestParameters@gametest@@@Z
     * @hash   1546143921
     */
    MCAPI std::vector<class std::shared_ptr<class gametest::BaseGameTestInstance>> const & runTests(class Dimension &, struct gametest::TestParameters &&);

//private:
    /**
     * @symbol ?_runTestPreparation@MinecraftGameTest@@AEAAXAEBVBaseGameTestFunction@gametest@@@Z
     * @hash   -1187418188
     */
    MCAPI void _runTestPreparation(class gametest::BaseGameTestFunction const &);

private:

};