#include <stdio.h>
#include <ctype.h>

int main() {
    char chars[] = { 'A', 'z', '5', '!', '\0' };
    int n = sizeof(chars) / sizeof(chars[0]);

    for (int i = 0; i < n; i++) {
        char ch = chars[i];
        printf("%c - alpha:%d digit:%d upper:%c lower:%c\n",
               ch,
               isalpha((unsigned char)ch),
               isdigit((unsigned char)ch),
               isalpha((unsigned char)ch) ? toupper((unsigned char)ch) : ' ',
               isalpha((unsigned char)ch) ? tolower((unsigned char)ch) : ' ');
    }

    return 0;
}
