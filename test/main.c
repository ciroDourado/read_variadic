#include <stdio.h>
#include <stdlib.h>
#include "read_variadic.h"


int main() {

    printf("\n");
    printf(" | Calling v_read with no params:\n");
    char* input = read();
//  |
    clean(&input);


    printf("\n");
    printf(" | Calling v_read with one param:\n");
    input = read(" | >>> ");
//  |
    clean(&input);


    printf("\n");
    printf(" | Calling v_read with two params:\n");
    input = read(" | Please, leave a star :3\n", " | >>> ");
//  |
    clean(&input);


    printf("\n");
    printf(" | Calling v_read with five params:\n");
    input = read(" | ", ">", ">", ">", " ");
//  |
    clean(&input);

    return 0;
}
