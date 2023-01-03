/**
 * @file  PlayerScoreboardId.hpp
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
 * @brief MC structure PlayerScoreboardId.
 *
 */
struct PlayerScoreboardId {
#define AFTER_EXTRA
    // Add Member There
    // acotid
    long long Actoruniqueid;

    PlayerScoreboardId(ActorUniqueID const& aid) : Actoruniqueid(aid.id) {}

    inline long long get() const {
        return Actoruniqueid;
    }

    inline operator long long() const {
        return Actoruniqueid;
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSCOREBOARDID
public:
    struct PlayerScoreboardId& operator=(struct PlayerScoreboardId const&) = delete;
    PlayerScoreboardId(struct PlayerScoreboardId const&) = delete;
#endif

public:
    /**
     * @symbol ??0PlayerScoreboardId@@QEAA@XZ
     * @hash   1346174844
     */
    MCAPI PlayerScoreboardId();
    /**
     * @symbol ??0PlayerScoreboardId@@QEAA@_J@Z
     * @hash   1462011894
     */
    MCAPI PlayerScoreboardId(__int64);
    /**
     * @symbol ?getHash@PlayerScoreboardId@@QEBA_KXZ
     * @hash   2047706355
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @symbol ??8PlayerScoreboardId@@QEBA_NAEBU0@@Z
     * @hash   -1750191467
     */
    MCAPI bool operator==(struct PlayerScoreboardId const&) const;
    /**
     * @symbol ?INVALID@PlayerScoreboardId@@2U1@B
     * @hash   -1015004428
     */
    MCAPI static struct PlayerScoreboardId const INVALID;
};