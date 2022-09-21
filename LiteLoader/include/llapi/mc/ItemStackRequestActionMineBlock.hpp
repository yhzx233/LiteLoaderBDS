/**
 * @file  ItemStackRequestActionMineBlock.hpp
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
 * @brief MC class ItemStackRequestActionMineBlock.
 *
 */
class ItemStackRequestActionMineBlock {

#define AFTER_EXTRA
// Add Member There
public:
enum class PreValidationStatus;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONMINEBLOCK
public:
    class ItemStackRequestActionMineBlock& operator=(class ItemStackRequestActionMineBlock const &) = delete;
    ItemStackRequestActionMineBlock(class ItemStackRequestActionMineBlock const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   529664184
     */
    virtual ~ItemStackRequestActionMineBlock();
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
     * @vftbl  4
     * @symbol ?_write@ItemStackRequestActionMineBlock@@MEBAXAEAVBinaryStream@@@Z
     * @hash   -635760964
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl  5
     * @symbol ?_read@ItemStackRequestActionMineBlock@@MEAA_NAEAVReadOnlyBinaryStream@@@Z
     * @hash   -1987350636
     */
    virtual bool _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemStackRequestActionMineBlock@@QEAA@XZ
     * @hash   -1566683994
     */
    MCAPI ItemStackRequestActionMineBlock();
    /**
     * @symbol ?getPreValidationStatus@ItemStackRequestActionMineBlock@@QEBA?AW4PreValidationStatus@1@XZ
     * @hash   -43184497
     */
    MCAPI enum class ItemStackRequestActionMineBlock::PreValidationStatus getPreValidationStatus() const;
    /**
     * @symbol ?getPredictedDurability@ItemStackRequestActionMineBlock@@QEBAHXZ
     * @hash   1790784252
     */
    MCAPI int getPredictedDurability() const;
    /**
     * @symbol ?getSrc@ItemStackRequestActionMineBlock@@QEBA?AUItemStackRequestSlotInfo@@XZ
     * @hash   -1726637396
     */
    MCAPI struct ItemStackRequestSlotInfo getSrc() const;
    /**
     * @symbol ?setPreValidationStatus@ItemStackRequestActionMineBlock@@QEBAXW4PreValidationStatus@1@@Z
     * @hash   1510675875
     */
    MCAPI void setPreValidationStatus(enum class ItemStackRequestActionMineBlock::PreValidationStatus) const;

};