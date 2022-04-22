// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EndCityPieces {

#define AFTER_EXTRA
// Add Member There
public:
class EndCityPiece {
public:
    EndCityPiece() = delete;
    EndCityPiece(EndCityPiece const&) = delete;
    EndCityPiece(EndCityPiece const&&) = delete;
};
class SectionGenerator {
public:
    SectionGenerator() = delete;
    SectionGenerator(SectionGenerator const&) = delete;
    SectionGenerator(SectionGenerator const&&) = delete;
};
enum SectionType;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDCITYPIECES
public:
    class EndCityPieces& operator=(class EndCityPieces const &) = delete;
    EndCityPieces(class EndCityPieces const &) = delete;
    EndCityPieces() = delete;
#endif

public:
    MCAPI static void startHouseTower(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class BlockPos const &, enum Rotation, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);

protected:

private:
    MCAPI static class EndCityPieces::EndCityPiece * _addHelper(std::vector<std::unique_ptr<class StructurePiece>> &, std::unique_ptr<class EndCityPieces::EndCityPiece>);
    MCAPI static std::unique_ptr<class EndCityPieces::EndCityPiece> _createPiece(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class EndCityPieces::EndCityPiece *, class BlockPos const &, std::string const &, enum Rotation, bool);
    MCAPI static bool _recursiveChildren(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, std::vector<std::unique_ptr<class EndCityPieces::SectionGenerator>> const &, enum EndCityPieces::SectionType, int, class EndCityPieces::EndCityPiece *, class BlockPos const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    MCAPI static class LegacyStructureSettings mInsertSettings;
    MCAPI static class LegacyStructureSettings mOverwriteSettings;

};