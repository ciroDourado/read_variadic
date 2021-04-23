#include "read_internals.h"


// void _print(const char* message) {
//     message != NULL?
//         printf(message):
//         printf("");
// } // end _print


char* _alloc_and_read() {
	int bytes_to_read_initially = 1, endline_size = 1;
	int size = bytes_to_read_initially + endline_size;

    char* input = (char*)malloc(size*sizeof(char));
    return (input != NULL)?
        _read(size, input):
        NULL;
} // end _alloc_and_read


char* _read(int size, char* input) {
    return fgets(input, size, stdin) != NULL?
        _verify(input, size):
        NULL;
} // end _read


char* _verify(char* input, int size) {
    return input[0] == '\n'?
        _trim(input):
        _consume_stdin_into(input, size);
} // end _verify


char* _trim(char* input) {
    input[0] = '\0';
    return input;
} // end _trim


char* _consume_stdin_into(char* input, int size) {
    char catch = 0; // just to init
    while( (catch = getchar()) != '\n' ) {
        size++;
        input = realloc(input, size*sizeof(char));
        if( input == NULL ) {
            _clean_stdin();
            break;
        } else input[size-2] = catch;
    }
    if(input != NULL) input[size-1] = '\0';
    return input;
} // end _consume_stdin_into


void _clean_stdin() {
    do { } while( getchar() != '\n' );
} // end _clean_stdin
