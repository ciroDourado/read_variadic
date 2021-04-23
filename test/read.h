#include "read_internals.h"

// Read function that does not care
// about how many space you'll need
//
// Everything may be dynamically saved,
// and returned as a trimmed string
//
// Return value:
// * pointer to String on heap
// * NULL if something went wrong
//
// Input value:
// * Pass some hardcoded string to be
//   printed before your reading process
// * or NULL, if you only want to read
// char* read  (const char*);

// Frees any heap string that you
// want to pass. Nothing special.
void  clean (char**);
