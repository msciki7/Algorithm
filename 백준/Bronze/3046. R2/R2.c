#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    
    int r1, r2, s;

    scanf("%d %d", &r1, &s);

    r2 = 2 * s - r1;

    printf("%d", r2);

    return 0;
}

