/**
 * @file  EnchantRandomEquipmentFunction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantRandomEquipmentFunction.
 *
 */
class EnchantRandomEquipmentFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTRANDOMEQUIPMENTFUNCTION
public:
    class EnchantRandomEquipmentFunction& operator=(class EnchantRandomEquipmentFunction const &) = delete;
    EnchantRandomEquipmentFunction(class EnchantRandomEquipmentFunction const &) = delete;
    EnchantRandomEquipmentFunction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -147968460
     */
    virtual ~EnchantRandomEquipmentFunction();
    /**
     * @vftbl  1
     * @symbol ?apply@EnchantRandomEquipmentFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   1233502374
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @vftbl  3
     * @symbol ?apply@EnchantRandomEquipmentFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   558207035
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @symbol ?deserialize@EnchantRandomEquipmentFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
     * @hash   826813935
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

};