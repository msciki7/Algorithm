#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculation(int, int);

int main() {
   
    int a, b;
    scanf("%d %d", &a, &b);

    int result = calculation(a, b);

    printf("%d", result);

    return 0;
}

int calculation(int a, int b) {
    
    return (a + b) * (a - b);
}