#include "read.h"
#include <stdarg.h>

char* read( const char*, ... );
void v_print( const char*, va_list );

#define v_print_macro( _read_args ) { /* Interface name definition             */ \
    va_list args;                     /* Creates list to store arguments       */ \
    va_start(args, init);             /* Push first argumento to the list      */ \
    v_print(init, args);              /* Calls function that consumes the list */ \
    va_end(args);                     /* Free list */ }
