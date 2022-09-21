/**
 * @file  IndexSet.hpp
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
 * @brief MC class IndexSet.
 *
 */
class IndexSet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @symbol ??0IndexSet@@QEAA@AEBV0@@Z
     * @hash   202531105
     */
    MCAPI IndexSet(class IndexSet const &);
    /**
     * @symbol ??0IndexSet@@QEAA@$$QEAV0@@Z
     * @hash   1460620553
     */
    MCAPI IndexSet(class IndexSet &&);
    /**
     * @symbol ??0IndexSet@@QEAA@XZ
     * @hash   692673372
     */
    MCAPI IndexSet();
    /**
     * @symbol ?clear@IndexSet@@QEAAXXZ
     * @hash   590256611
     */
    MCAPI void clear();
    /**
     * @symbol ?contains@IndexSet@@QEBA_N_K@Z
     * @hash   2002903758
     */
    MCAPI bool contains(unsigned __int64) const;
    /**
     * @symbol ?getPacked@IndexSet@@QEBAAEBV?$vector@_KV?$allocator@_K@std@@@std@@XZ
     * @hash   -622393896
     */
    MCAPI std::vector<unsigned __int64> const & getPacked() const;
    /**
     * @symbol ?insert@IndexSet@@QEAAX_K@Z
     * @hash   -1719363449
     */
    MCAPI void insert(unsigned __int64);
    /**
     * @symbol ??4IndexSet@@QEAAAEAV0@AEBV0@@Z
     * @hash   -2039619868
     */
    MCAPI class IndexSet & operator=(class IndexSet const &);
    /**
     * @symbol ??8IndexSet@@QEBA_NAEBV0@@Z
     * @hash   -814305561
     */
    MCAPI bool operator==(class IndexSet const &) const;
    /**
     * @symbol ?remove@IndexSet@@QEAAX_K@Z
     * @hash   -2025748143
     */
    MCAPI void remove(unsigned __int64);
    /**
     * @symbol ??1IndexSet@@QEAA@XZ
     * @hash   -779101014
     */
    MCAPI ~IndexSet();

};