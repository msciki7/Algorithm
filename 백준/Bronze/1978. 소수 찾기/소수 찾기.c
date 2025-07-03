#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int prime = 0;

    int a;
    while(n > 0) {
        scanf("%d", &a);

        int m =0;
        for (int i = 1; i <= a; i++) {
            if (a % i == 0) {
                m++;
            }
        }
        
        if (m == 2) {
            prime++;
        }
        n--;
    }

    printf("%d", prime);

    return 0;
}

