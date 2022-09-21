/**
 * @file  ChestContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LevelContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChestContainerManagerModel.
 *
 */
class ChestContainerManagerModel : public LevelContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHESTCONTAINERMANAGERMODEL
public:
    class ChestContainerManagerModel& operator=(class ChestContainerManagerModel const &) = delete;
    ChestContainerManagerModel(class ChestContainerManagerModel const &) = delete;
    ChestContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1229697562
     */
    virtual ~ChestContainerManagerModel();
    /**
     * @vftbl  16
     * @symbol ?isValid@ChestContainerManagerModel@@UEAA_NM@Z
     * @hash   226938931
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol ?_postInit@ChestContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   -514404246
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0ChestContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@UActorUniqueID@@@Z
     * @hash   1425725967
     */
    MCAPI ChestContainerManagerModel(enum class ContainerID, class Player &, struct ActorUniqueID);
    /**
     * @symbol ??0ChestContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@W4BlockActorType@@@Z
     * @hash   -991217378
     */
    MCAPI ChestContainerManagerModel(enum class ContainerID, class Player &, class BlockPos const &, enum class BlockActorType);

};