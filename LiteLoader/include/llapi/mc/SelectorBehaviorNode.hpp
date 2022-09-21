/**
 * @file  SelectorBehaviorNode.hpp
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
 * @brief MC class SelectorBehaviorNode.
 *
 */
class SelectorBehaviorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SELECTORBEHAVIORNODE
public:
    class SelectorBehaviorNode& operator=(class SelectorBehaviorNode const &) = delete;
    SelectorBehaviorNode(class SelectorBehaviorNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -600597571
     */
    virtual ~SelectorBehaviorNode();
    /**
     * @vftbl  1
     * @symbol ?tick@SelectorBehaviorNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     * @hash   -59115856
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl  2
     * @symbol ?initializeFromDefinition@SelectorBehaviorNode@@MEAAXAEAVActor@@@Z
     * @hash   612646317
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @symbol ??0SelectorBehaviorNode@@QEAA@XZ
     * @hash   -119217809
     */
    MCAPI SelectorBehaviorNode();

};