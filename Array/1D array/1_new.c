#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Ranges of various data types in C:\n\n");

    printf("CHAR_BIT: %d\n", CHAR_BIT);
    printf("CHAR_MIN: %d\n", CHAR_MIN);
    printf("CHAR_MAX: %d\n\n", CHAR_MAX);

    printf("SIGNED CHAR_MIN: %d\n", SCHAR_MIN);
    printf("SIGNED CHAR_MAX: %d\n\n", SCHAR_MAX);

    printf("UNSIGNED CHAR_MAX: %u\n\n", UCHAR_MAX);

    printf("SHRT_MIN: %d\n", SHRT_MIN);
    printf("SHRT_MAX: %d\n\n", SHRT_MAX);

    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n\n", INT_MAX);

    printf("UINT_MAX: %u\n\n", UINT_MAX);

    printf("LONG_MIN: %ld\n", LONG_MIN);
    printf("LONG_MAX: %ld\n\n", LONG_MAX);

    printf("ULONG_MAX: %lu\n\n", ULONG_MAX);

    printf("LLONG_MIN: %lld\n", LLONG_MIN);
    printf("LLONG_MAX: %lld\n\n", LLONG_MAX);

    printf("ULLONG_MAX: %llu\n\n", ULLONG_MAX);

    printf("FLT_MIN: %E\n", FLT_MIN);
    printf("FLT_MAX: %E\n\n", FLT_MAX);

    printf("DBL_MIN: %E\n", DBL_MIN);
    printf("DBL_MAX: %E\n\n", DBL_MAX);

    printf("LDBL_MIN: %LE\n", LDBL_MIN);
    printf("LDBL_MAX: %LE\n\n", LDBL_MAX);

    return 0;
}
