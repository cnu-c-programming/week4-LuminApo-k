#include <stdio.h>

void swap_endian(int *x) {

    char* addr = (char*)x;
    char tmp;
        
    for (int i = 0; i < 2; i++)
    {
       tmp = addr[i];
       addr[i] = addr[3-i];
       addr[3-i] = tmp;
    }
    
}

int main()
{
    int x = 0x12345678;
    
    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);

    return 0;
}
