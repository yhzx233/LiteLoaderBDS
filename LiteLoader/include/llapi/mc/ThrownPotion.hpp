/**
 * @file  ThrownPotion.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Throwable.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ThrownPotion.
 *
 */
class ThrownPotion : public Throwable {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWNPOTION
public:
    class ThrownPotion& operator=(class ThrownPotion const &) = delete;
    ThrownPotion(class ThrownPotion const &) = delete;
    ThrownPotion() = delete;
#endif

public:
    /**
     * @vftbl  10
     * @symbol ?initializeComponents@ThrownPotion@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   399923813
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   -1997726011
     */
    virtual ~ThrownPotion();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  61
     * @hash   -198636769
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  68
     * @hash   -185437434
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl  82
     * @hash   -133720258
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  85
     * @hash   -137684383
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl  88
     * @hash   -128179132
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl  96
     * @hash   -108131711
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl  99
     * @hash   -98626460
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl  106
     * @hash   1332943623
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl  108
     * @hash   1334790665
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  109
     * @hash   1328979498
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  111
     * @hash   1356955169
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  171
     * @symbol ?queryEntityRenderer@ThrownPotion@@UEBAAEBVHashedString@@XZ
     * @hash   891827010
     */
    virtual class HashedString const & queryEntityRenderer() const;
    /**
     * @vftbl  182
     * @hash   1509264059
     */
    virtual void __unk_vfn_182();
    /**
     * @vftbl  196
     * @hash   1590605982
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  222
     * @hash   -2034256014
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -2020032253
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  240
     * @symbol ?setAuxValue@ThrownPotion@@UEAAXH@Z
     * @hash   130229028
     */
    virtual void setAuxValue(int);
    /**
     * @vftbl  248
     * @hash   -2007175034
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @hash   -786620466
     */
    virtual void __unk_vfn_251();
    /**
     * @vftbl  269
     * @hash   -1899974523
     */
    virtual void __unk_vfn_269();
    /**
     * @vftbl  273
     * @symbol ?readAdditionalSaveData@ThrownPotion@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   2063039900
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  274
     * @symbol ?addAdditionalSaveData@ThrownPotion@@UEBAXAEAVCompoundTag@@@Z
     * @hash   1905191809
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  277
     * @hash   -1873192414
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @hash   -1895428993
     */
    virtual void __unk_vfn_285();
    /**
     * @vftbl  287
     * @hash   -1844563263
     */
    virtual void __unk_vfn_287();
    /**
     * @symbol ??0ThrownPotion@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -1718841497
     */
    MCAPI ThrownPotion(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getPotionId@ThrownPotion@@QEBAFXZ
     * @hash   1065466843
     */
    MCAPI short getPotionId() const;
    /**
     * @symbol ?setLinger@ThrownPotion@@QEAAX_N@Z
     * @hash   -561462440
     */
    MCAPI void setLinger(bool);
    /**
     * @symbol ?SPLASH_RANGE@ThrownPotion@@2MB
     * @hash   1170697721
     */
    MCAPI static float const SPLASH_RANGE;

};