#include<stdio.h>
#include<string.h>
#include <assert.h>
   char * strReplace(const char *src, const char *old, const char *new)
{
    char *oldInDst = NULL;

    // allocate space for the new string
    char *dst = malloc(sizeof(char) * (strlen(src) + 1));  // +1 for NUL terminator
    assert(dst != NULL);

    // copy all of src into dst
    strcpy(dst, src);

    // find old inside dst
    oldInDst = strstr(dst, old);

    // overwrite old with new inside dst, don't include NUL terminator
    strncpy(oldInDst, new, strlen(new));

    return dst;
}

int main()
{
    char *dst = strReplace("Python strings are easy to use", "Python", "C"); // u have to print c strings are easy to use.
    printf("%s\n", dst);
    return 0;
}