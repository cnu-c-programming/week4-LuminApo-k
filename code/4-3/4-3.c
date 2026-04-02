#include <stdio.h>

int main() {
    int arr[] = {5, 7, 1, 9, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        int *addr = &arr[i];
        int *addr_next = &arr[i + 1];

        printf("address of arr[%d]: %p\n", i, (void *)addr);
        printf("address of arr[%d+1]: %p\n", i, (void *)addr_next);
        printf("&(arr[%d]) - &(arr[%d+1]) = %ld\n",
               i, i + 1, (long)((char *)addr_next - (char *)addr));
        printf("\n");
    }

    return 0;
}
