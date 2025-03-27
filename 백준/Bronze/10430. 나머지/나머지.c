#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SEC_PER_MINUTE 60


int main(void) {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", (a + b) % c);
    printf("%d\n", ((a%c)+ (b%c))%c);
    printf("%d\n", (a * b) % c);
    printf("%d\n", ((a % c) * (b % c)) % c);



    return 0;
}