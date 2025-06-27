#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    
    int n;
    scanf("%d", &n);

    char a[1000];

    while (n > 0) {
        scanf("%s", a);
        printf("%c%c\n", a[0], a[strlen(a) - 1]);
        n--;
    }

    return 0;
}

