#include "read_variadic_internals.h"

// macro expansion that provides the possibility
// of calling this function without passing any args
// (because it encapsulates/handles the initialization),
// or any number of params of type const char*
#define read(...) read("", ##__VA_ARGS__, NULL)
