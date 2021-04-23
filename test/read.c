#include "read.h"


// char* read(const char* message) {
//     _print(message);
//     return _alloc_and_read();
// } // end read


void clean(char** string) {
    if( string != NULL ) {
        if( *string != NULL ) {
            free(*string);
            *string = NULL;
        }
    }
} // clean
