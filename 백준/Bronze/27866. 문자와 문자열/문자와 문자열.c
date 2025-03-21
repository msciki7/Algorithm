#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SEC_PER_MINUTE 60

int main(void) {

    int n;
    char s[1001];

    scanf("%s", &s);
    scanf("%d", &n);

    printf("%c", s[n - 1]);


    return 0;
}
