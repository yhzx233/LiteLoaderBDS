// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RecipeCraftInputs {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPECRAFTINPUTS
public:
    class RecipeCraftInputs& operator=(class RecipeCraftInputs const &) = delete;
    RecipeCraftInputs(class RecipeCraftInputs const &) = delete;
    RecipeCraftInputs() = delete;
#endif

public:
    MCAPI RecipeCraftInputs(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    MCAPI ~RecipeCraftInputs();

protected:

private:

};