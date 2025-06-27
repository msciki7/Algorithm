#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
   
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long result = (a + b) * (a - b);

    printf("%lld", result);

    return 0;
}

