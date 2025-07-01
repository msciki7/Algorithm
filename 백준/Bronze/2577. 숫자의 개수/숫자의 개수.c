#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    
    int a, b, c;
    scanf("%d", &a);
   
    scanf("%d", &b);
   
    scanf("%d", &c);
   
    int res = a * b * c;
    int num[10] = { 0 };
    int input;
    while (res > 0) {
        input = res % 10;
        num[input]++;
        res /= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", num[i]);
    }
    
    return 0;
}

