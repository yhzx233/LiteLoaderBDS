/**
 * @file  BlastFurnaceContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FurnaceContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlastFurnaceContainerManagerModel.
 *
 */
class BlastFurnaceContainerManagerModel : public FurnaceContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLASTFURNACECONTAINERMANAGERMODEL
public:
    class BlastFurnaceContainerManagerModel& operator=(class BlastFurnaceContainerManagerModel const &) = delete;
    BlastFurnaceContainerManagerModel(class BlastFurnaceContainerManagerModel const &) = delete;
    BlastFurnaceContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1358489483
     */
    virtual ~BlastFurnaceContainerManagerModel();
    /**
     * @symbol ??0BlastFurnaceContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   -739696776
     */
    MCAPI BlastFurnaceContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &);

};