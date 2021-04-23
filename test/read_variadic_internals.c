#include "read_variadic_internals.h"

char* read( const char* init, ... ) {
    v_print_macro( _read_args );
    return _alloc_and_read();
} // end read

void v_print(const char* text, va_list params) {
    while( text != NULL ) {
        printf("%s", text); fflush(stdout);
        text = va_arg(params, const char*);
    }
} // end v_print
