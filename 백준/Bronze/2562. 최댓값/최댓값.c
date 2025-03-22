#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SEC_PER_MINUTE 60

int main(void) {

    int n, max, num;
    max = 0;

    for (int i = 1; i < 10; i++)
    {
        scanf("%d", &n);

        if (max < n) {
            max = n;
            num = i;
        }
    }
    printf("%d\n%d", max, num);

    return 0;
}
