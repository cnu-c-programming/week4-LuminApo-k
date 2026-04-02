#include <stdio.h>
#include <ctype.h>

int main() {
    char chars[] = { 'A', 'z', '5', '!' };
    int n = sizeof(chars) / sizeof(chars[0]);

    for (int i = 0; i < n; i++) {
        char ch = chars[i];

        printf("%c - alpha:%d digit:%d upper:%c lower:%c\n",
               ch,
               isalpha((unsigned char)ch) ? 1 : 0,
               isdigit((unsigned char)ch) ? 1 : 0,
               toupper((unsigned char)ch),
               tolower((unsigned char)ch));
    }

    return 0;
}
