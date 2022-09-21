/**
 * @file  LevelStorage.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelStorage.
 *
 */
class LevelStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGE
public:
    class LevelStorage& operator=(class LevelStorage const &) = delete;
    LevelStorage(class LevelStorage const &) = delete;
    LevelStorage() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1906179361
     */
    virtual ~LevelStorage();
    /**
     * @vftbl  1
     * @symbol ?addStorageObserver@DBStorage@@UEAAXV?$unique_ptr@VLevelStorageObserver@@U?$default_delete@VLevelStorageObserver@@@std@@@std@@@Z
     * @hash   1670539384
     */
    virtual void addStorageObserver(std::unique_ptr<class LevelStorageObserver>) = 0;
    /**
     * @vftbl  2
     * @symbol ?getCompoundTag@DBStorage@@UEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4Category@DBHelpers@@@Z
     * @hash   1441904704
     */
    virtual std::unique_ptr<class CompoundTag> getCompoundTag(std::string const &, enum class DBHelpers::Category) = 0;
    /**
     * @vftbl  3
     * @symbol ?hasKey@DBStorage@@UEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@W4Category@DBHelpers@@@Z
     * @hash   -1761566085
     */
    virtual bool hasKey(class gsl::basic_string_span<char const, -1>, enum class DBHelpers::Category) const = 0;
    /**
     * @vftbl  4
     * @symbol ?forEachKeyWithPrefix@DBStorage@@UEBAXV?$basic_string_span@$$CBD$0?0@gsl@@W4Category@DBHelpers@@AEBV?$function@$$A6AXV?$basic_string_span@$$CBD$0?0@gsl@@0@Z@std@@@Z
     * @hash   1612440878
     */
    virtual void forEachKeyWithPrefix(class gsl::basic_string_span<char const, -1>, enum class DBHelpers::Category, class std::function<void (class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>)> const &) const = 0;
    /**
     * @vftbl  5
     * @symbol ?loadLevelData@DBStorage@@UEAA_NAEAVLevelData@@@Z
     * @hash   -1326466865
     */
    virtual bool loadLevelData(class LevelData &) = 0;
    /**
     * @vftbl  6
     * @symbol ?createChunkStorage@DBStorage@@UEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
     * @hash   -2058199934
     */
    virtual std::unique_ptr<class ChunkSource> createChunkStorage(std::unique_ptr<class ChunkSource>, enum class StorageVersion) = 0;
    /**
     * @vftbl  7
     * @symbol ?saveLevelData@DBStorage@@UEAAXAEBVLevelData@@@Z
     * @hash   -298841643
     */
    virtual void saveLevelData(class LevelData const &) = 0;
    /**
     * @vftbl  8
     * @symbol ?getFullPath@DBStorage@@UEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   2103610490
     */
    virtual class Core::PathBuffer<std::string> const & getFullPath() const = 0;
    /**
     * @vftbl  9
     * @symbol ?saveData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@$$QEAV43@W4Category@DBHelpers@@@Z
     * @hash   964951374
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(std::string const &, std::string &&, enum class DBHelpers::Category) = 0;
    /**
     * @vftbl  10
     * @symbol ?saveData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBVLevelStorageWriteBatch@@@Z
     * @hash   615126011
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(class LevelStorageWriteBatch const &) = 0;
    /**
     * @vftbl  11
     * @symbol ?deleteData@DBStorage@@UEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4Category@DBHelpers@@@Z
     * @hash   1044661921
     */
    virtual class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> deleteData(std::string const &, enum class DBHelpers::Category) = 0;
    /**
     * @vftbl  12
     * @symbol ?syncIO@DBStorage@@UEAAXXZ
     * @hash   642857740
     */
    virtual void syncIO() = 0;
    /**
     * @vftbl  13
     * @symbol ?getStatistics@DBStorage@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -499950208
     */
    virtual void getStatistics(std::string &) const = 0;
    /**
     * @vftbl  14
     * @symbol ?clonePlayerData@LevelStorage@@UEAA_NV?$basic_string_span@$$CBD$0?0@gsl@@0@Z
     * @hash   229572594
     */
    virtual bool clonePlayerData(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>);
    /**
     * @vftbl  15
     * @hash   514806732
     */
    virtual void __unk_vfn_15() = 0;
    /**
     * @vftbl  16
     * @symbol ?startShutdown@DBStorage@@UEAAXXZ
     * @hash   1643513923
     */
    virtual void startShutdown() = 0;
    /**
     * @vftbl  17
     * @symbol ?isShuttingDown@DBStorage@@UEBA_NXZ
     * @hash   526770602
     */
    virtual bool isShuttingDown() const = 0;
    /**
     * @vftbl  18
     * @symbol ?checkShutdownDone@DBStorage@@UEAA_NXZ
     * @hash   -968227747
     */
    virtual bool checkShutdownDone() = 0;
    /**
     * @vftbl  19
     * @symbol ?loadData@LevelStorage@@UEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Category@DBHelpers@@@Z
     * @hash   770778702
     */
    virtual bool loadData(class gsl::basic_string_span<char const, -1>, std::string &, enum class DBHelpers::Category) const;
    /**
     * @vftbl  20
     * @hash   538818278
     */
    virtual void __unk_vfn_20() = 0;
    /**
     * @vftbl  21
     * @symbol ?createSnapshot@DBStorage@@UEAA?AV?$vector@USnapshotFilenameAndLength@@V?$allocator@USnapshotFilenameAndLength@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   1051430120
     */
    virtual std::vector<struct SnapshotFilenameAndLength> createSnapshot(std::string const &) = 0;
    /**
     * @vftbl  22
     * @symbol ?releaseSnapshot@DBStorage@@UEAAXXZ
     * @hash   336555638
     */
    virtual void releaseSnapshot() = 0;
    /**
     * @vftbl  23
     * @symbol ?compactStorage@DBStorage@@UEAAXXZ
     * @hash   843024771
     */
    virtual void compactStorage() = 0;
    /**
     * @vftbl  24
     * @symbol ?syncAndSuspendStorage@DBStorage@@UEAAXXZ
     * @hash   -781377402
     */
    virtual void syncAndSuspendStorage() = 0;
    /**
     * @vftbl  25
     * @symbol ?resumeStorage@DBStorage@@UEAAXXZ
     * @hash   1040054073
     */
    virtual void resumeStorage() = 0;
    /**
     * @vftbl  26
     * @symbol ?setFlushAllowed@DBStorage@@UEAAX_N@Z
     * @hash   -345064975
     */
    virtual void setFlushAllowed(bool) = 0;
    /**
     * @vftbl  27
     * @symbol ?flushToPermanentStorage@DBStorage@@UEAAXXZ
     * @hash   851947415
     */
    virtual void flushToPermanentStorage() = 0;
    /**
     * @vftbl  28
     * @symbol ?freeCaches@LevelStorage@@UEAAXXZ
     * @hash   992447821
     */
    virtual void freeCaches();
    /**
     * @vftbl  29
     * @symbol ?setCompactionCallback@DBStorage@@UEAAXV?$function@$$A6AXW4CompactionStatus@@@Z@std@@@Z
     * @hash   1748025404
     */
    virtual void setCompactionCallback(class std::function<void (enum class CompactionStatus)>) = 0;
    /**
     * @vftbl  30
     * @symbol ?setCriticalSyncSaveCallback@DBStorage@@UEAAXV?$function@$$A6AXXZ@std@@@Z
     * @hash   1835081026
     */
    virtual void setCriticalSyncSaveCallback(class std::function<void (void)>) = 0;
    /**
     * @vftbl  31
     * @symbol ?corruptLevel@LevelStorage@@UEAAXXZ
     * @hash   1835029063
     */
    virtual void corruptLevel();
    /**
     * @symbol ?getServerId@LevelStorage@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUPlayerStorageIds@@@Z
     * @hash   -929519795
     */
    MCAPI std::string getServerId(struct PlayerStorageIds const &);
    /**
     * @symbol ?getServerId@LevelStorage@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@_N@Z
     * @hash   445658148
     */
    MCAPI std::string getServerId(class Player const &, bool);
    /**
     * @symbol ?loadAllPlayerIDs@LevelStorage@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@_N@Z
     * @hash   1671370928
     */
    MCAPI std::vector<std::string> loadAllPlayerIDs(bool) const;
    /**
     * @symbol ?loadPlayerDataFromTag@LevelStorage@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   593379103
     */
    MCAPI std::unique_ptr<class CompoundTag> loadPlayerDataFromTag(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?loadServerPlayerData@LevelStorage@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBVPlayer@@_N@Z
     * @hash   -123017144
     */
    MCAPI std::unique_ptr<class CompoundTag> loadServerPlayerData(class Player const &, bool);
    /**
     * @symbol ?save@LevelStorage@@QEAAXAEAVActor@@@Z
     * @hash   884234586
     */
    MCAPI void save(class Actor &);
    /**
     * @symbol ?saveData@LevelStorage@@QEAA?AV?$shared_ptr@V?$IAsyncResult@X@Threading@Bedrock@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVCompoundTag@@W4Category@DBHelpers@@@Z
     * @hash   -1327686961
     */
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> saveData(std::string const &, class CompoundTag const &, enum class DBHelpers::Category);
    /**
     * @symbol ?LEGACY_CONSOLE_PLAYER_PREFIX@LevelStorage@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -384454151
     */
    MCAPI static std::string const LEGACY_CONSOLE_PLAYER_PREFIX;
    /**
     * @symbol ?LOCAL_PLAYER_TAG@LevelStorage@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1675183851
     */
    MCAPI static std::string const LOCAL_PLAYER_TAG;

};