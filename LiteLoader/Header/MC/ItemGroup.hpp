// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMGROUP
public:
    class ItemGroup& operator=(class ItemGroup const &) = delete;
    ItemGroup(class ItemGroup const &) = delete;
    ItemGroup() = delete;
#endif

public:
    MCAPI ItemGroup(class ItemInstance const &);
    MCAPI bool isEmpty() const;
    MCAPI class ItemGroup & operator=(class ItemGroup &&);
    MCAPI ~ItemGroup();

protected:

private:

};