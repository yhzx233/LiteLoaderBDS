// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct Interaction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTION
public:
    struct Interaction& operator=(struct Interaction const &) = delete;
#endif

public:
    MCAPI Interaction(struct Interaction const &);
    MCAPI Interaction();
    MCAPI void addActorDefinitionIdentifierByName(std::string const &);
    MCAPI void addLevelSoundEventByName(std::string const &);
    MCAPI void setCooldown(float const &);
    MCAPI void setCooldownAfterBeingAttacked(float const &);
    MCAPI void setParticleType(std::string const &);
    MCAPI void setTransformItem(std::string const &);
    MCAPI ~Interaction();

protected:

private:

};