// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <memory>

#undef BEFORE_EXTRA

struct TagMemoryChunk {

#define AFTER_EXTRA
// Add Member There
public:
    size_t capacity = 0;
    size_t size = 0;
    std::unique_ptr<char[]> data;

#define DISABLE_CONSTRUCTOR_PREVENTION_TAGMEMORYCHUNK
    TagMemoryChunk() = delete;

    LIAPI TagMemoryChunk(char data[], size_t size);
    LIAPI TagMemoryChunk(const TagMemoryChunk& a1);
    LIAPI TagMemoryChunk(TagMemoryChunk&& a1);

    LIAPI void operator=(const TagMemoryChunk& a1);
    LIAPI void operator=(TagMemoryChunk&& a1);

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAGMEMORYCHUNK
public:
    struct TagMemoryChunk& operator=(struct TagMemoryChunk const &) = delete;
    TagMemoryChunk(struct TagMemoryChunk const &) = delete;
    TagMemoryChunk() = delete;
#endif

public:
    MCAPI struct TagMemoryChunk copy() const;
    MCAPI bool operator!=(struct TagMemoryChunk const &) const;
    MCAPI ~TagMemoryChunk();

protected:

private:

};