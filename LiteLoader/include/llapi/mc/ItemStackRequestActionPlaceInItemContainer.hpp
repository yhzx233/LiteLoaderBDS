/**
 * @file  ItemStackRequestActionPlaceInItemContainer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackRequestActionTransferBase.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionPlaceInItemContainer.
 *
 */
class ItemStackRequestActionPlaceInItemContainer : public ItemStackRequestActionTransferBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONPLACEINITEMCONTAINER
public:
    class ItemStackRequestActionPlaceInItemContainer& operator=(class ItemStackRequestActionPlaceInItemContainer const &) = delete;
    ItemStackRequestActionPlaceInItemContainer(class ItemStackRequestActionPlaceInItemContainer const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2023440092
     */
    virtual ~ItemStackRequestActionPlaceInItemContainer();
    /**
     * @vftbl  1
     * @hash   -1408478591
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   2004456210
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1370913101
     */
    virtual void __unk_vfn_3();
    /**
     * @symbol ??0ItemStackRequestActionPlaceInItemContainer@@QEAA@XZ
     * @hash   -13818146
     */
    MCAPI ItemStackRequestActionPlaceInItemContainer();

};