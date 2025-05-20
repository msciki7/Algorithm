#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    
    int n;
    scanf("%d", &n);

    int x[4];

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    
    int min;
    for (int i = 0; i < n; i++) {
        min = x[i];
        if (min > x[i]) {
            min = x[i];
        }
    }

    
    for (int j = 1; j <= min; j++) {
        int corret = 1;
        for (int i = 0; i < n; i++) {
            if (x[i] % j != 0) {
                corret = 0;
                break;
            }
        }
        if (corret == 1) {
            printf("%d\n", j);
        }
    }

    return 0;
}
