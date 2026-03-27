#include <stdio.h>

int main()
{
    printf("sezeof(int*) = %zu\n", sizeof(int*));
    printf("sezeof(double*) = %zu\n", sizeof(double*));
    printf("sezeof(char*) = %zu\n", sizeof(char*));
    printf("sezeof(void*) = %zu\n", sizeof(void*));
    
    return 0;
}
