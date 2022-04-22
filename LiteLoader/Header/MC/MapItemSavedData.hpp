// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MapDecoration.hpp"
#include "MapItemTrackedActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MapItemSavedData {

#define AFTER_EXTRA
// Add Member There
public:
struct ChunkBounds {
    ChunkBounds() = delete;
    ChunkBounds(ChunkBounds const&) = delete;
    ChunkBounds(ChunkBounds const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPITEMSAVEDDATA
public:
    class MapItemSavedData& operator=(class MapItemSavedData const &) = delete;
    MapItemSavedData(class MapItemSavedData const &) = delete;
    MapItemSavedData() = delete;
#endif

public:
    MCAPI MapItemSavedData(struct ActorUniqueID);
    MCAPI class std::shared_ptr<class MapItemTrackedActor> addTrackedMapEntity(class Actor &, enum MapDecoration::Type);
    MCAPI class std::shared_ptr<class MapItemTrackedActor> addTrackedMapEntity(class BlockPos const &, class BlockSource &, enum MapDecoration::Type);
    MCAPI void copyMapData(class MapItemSavedData const &);
    MCAPI void deserialize(class CompoundTag const &);
    MCAPI void enableUnlimitedTracking();
    MCAPI std::unique_ptr<class Packet> getFullDataPacket() const;
    MCAPI struct ActorUniqueID getMapId() const;
    MCAPI struct ActorUniqueID getParentMapId() const;
    MCAPI class buffer_span<unsigned int> getPixels() const;
    MCAPI class std::shared_ptr<class MapItemTrackedActor> getTrackedMapEntity(class Actor &);
    MCAPI class std::shared_ptr<class MapItemTrackedActor> getTrackedMapEntity(class BlockPos const &, class BlockSource &);
    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class Level &, class BlockPos const &) const;
    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const &, class Level &, class Actor &) const;
    MCAPI bool hasParentMap() const;
    MCAPI bool isAdjacent(class MapItemSavedData const &, int) const;
    MCAPI bool isChunkAllEmpty(struct MapItemSavedData::ChunkBounds) const;
    MCAPI bool isFullyExplored() const;
    MCAPI bool isLocked() const;
    MCAPI void removeTrackedMapEntity(class BlockPos const &);
    MCAPI void save(class LevelStorage &);
    MCAPI void serialize(class CompoundTag &) const;
    MCAPI void setDirtyForSaveAndPixelData();
    MCAPI void setLocked();
    MCAPI void setMapSection(class buffer_span<unsigned int>, struct MapItemSavedData::ChunkBounds);
    MCAPI void setOrigin(class Vec3, int, class AutomaticID<class Dimension, int>, bool, bool, class BlockPos const &);
    MCAPI void setPixel(unsigned int, unsigned int, unsigned int);
    MCAPI void setPixelDirty(unsigned int, unsigned int);
    MCAPI void setScale(int);
    MCAPI void setScaleAndParentMapId(int, struct ActorUniqueID);
    MCAPI void tickByBlock(class BlockPos const &, class BlockSource &);
    MCAPI void tickCarriedBy(class Actor &, class CompoundTag const *);
    MCAPI void trySave(class LevelStorage &);
    MCAPI ~MapItemSavedData();
    MCAPI static std::string getSerializationKey(struct ActorUniqueID);

protected:

private:
    MCAPI void _addDecoration(enum MapDecoration::Type, class Level &, struct MapItemTrackedActor::UniqueId const &, class Vec3 const &, std::string const &, class mce::Color const &);
    MCAPI class std::shared_ptr<class MapItemTrackedActor> _addTrackedMapEntity(struct MapItemTrackedActor::UniqueId const &, class BlockSource &, enum MapDecoration::Type);
    MCAPI void _deserializeData(class CompoundTag const &);
    MCAPI class std::shared_ptr<class MapItemTrackedActor> _findTrackedMapEntity(class BlockPos const &) const;
    MCAPI void _removeDecoration(struct MapItemTrackedActor::UniqueId const &);
    MCAPI void _removeTrackedMapEntity(struct MapItemTrackedActor::UniqueId const &);
    MCAPI bool _updateTrackedEntityDecoration(class BlockSource &, class std::shared_ptr<class MapItemTrackedActor>);
    MCAPI void _updateTrackedEntityDecorations(class BlockSource &);
    MCAPI void _updateTrackedPlayerDecorations(class BlockSource &, class Player &, class Vec3 &, std::string &, class mce::Color &, class AutomaticID<class Dimension, int>, enum MapDecoration::Type &);

};