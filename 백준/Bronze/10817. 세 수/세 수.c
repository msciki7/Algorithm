#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SEC_PER_MINUTE 60


int main(void) {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int mid;

    if (a >= b && a >= c) {
        if (b >= c) {
            mid = b;
        }
        else {
            mid = c;
        }
    }
    if (b >= a && b >= c) {
        if (a >= c) {
            mid = a;
        }
        else {
            mid = c;
        }
    }
    if (c >= b && c >= a) {
        if (a >= b) {
            mid = a;
        }
        else {
            mid = b;
        }
    }


    printf("%d", mid);

    return 0;
}