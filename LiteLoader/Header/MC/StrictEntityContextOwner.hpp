// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StrictEntityContextOwner {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRICTENTITYCONTEXTOWNER
public:
    class StrictEntityContextOwner& operator=(class StrictEntityContextOwner const &) = delete;
    StrictEntityContextOwner(class StrictEntityContextOwner const &) = delete;
    StrictEntityContextOwner() = delete;
#endif

public:
    MCAPI StrictEntityContextOwner(class StrictEntityContextOwner &&);
    MCAPI class StrictEntityContextOwner & operator=(class StrictEntityContextOwner &&);
    MCAPI ~StrictEntityContextOwner();

protected:

private:

};