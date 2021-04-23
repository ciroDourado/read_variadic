#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  _print              (const char*);
char* _alloc_and_read     ();
char* _read               (int, char*);
char* _verify             (char*, int);
char* _trim               (char*);
char* _consume_stdin_into (char*, int);
void  _clean_stdin        ();
