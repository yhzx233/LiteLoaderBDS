/**
 * @file  NavigationFloatDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NavigationFloatDescription.
 *
 */
class NavigationFloatDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONFLOATDESCRIPTION
public:
    class NavigationFloatDescription& operator=(class NavigationFloatDescription const &) = delete;
    NavigationFloatDescription(class NavigationFloatDescription const &) = delete;
    NavigationFloatDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@NavigationFloatDescription@@UEBAPEBDXZ
     * @hash   -887956560
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   -1880410626
     */
    virtual ~NavigationFloatDescription();

};