// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MovementECSFeatureToggleSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEMENTECSFEATURETOGGLESYSTEM
public:
    class MovementECSFeatureToggleSystem& operator=(class MovementECSFeatureToggleSystem const &) = delete;
    MovementECSFeatureToggleSystem(class MovementECSFeatureToggleSystem const &) = delete;
    MovementECSFeatureToggleSystem() = delete;
#endif

public:
    /*0*/ virtual ~MovementECSFeatureToggleSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry &);

protected:

private:

};