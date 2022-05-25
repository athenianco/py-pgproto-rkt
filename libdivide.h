#if __has_include("numpy/libdivide/libdivide.h")
#include "numpy/libdivide/libdivide.h"  // >= 1.21
#else
#include "numpy/libdivide.h"  // < 1.21
#endif