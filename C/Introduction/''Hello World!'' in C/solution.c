#include <stdio.h>

/*
 * Kritaarth, 1/12/23
 */

int main() {
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    printf(s);
    return 0;
}