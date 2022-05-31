#include <malloc.h>
#include <stdlib.h>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32)
#define memalign(alignment, size) _aligned_malloc(size, alignment)
#define aligned_free _aligned_free
#else
#if __APPLE__
inline void *memalign(size_t alignment, size_t size) {
  void *mem;
  if (!posix_memalign(&mem, alignment, size)) {
    return NULL;
  }
  return mem;
}
#endif
#define aligned_free free
#endif
