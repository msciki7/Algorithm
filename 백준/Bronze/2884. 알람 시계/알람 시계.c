#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    
    int h, m;

    scanf("%d %d", &h, &m);

    if (h == 0) {
        if (m < 45) {
            h = 23;
            m = m + 60 - 45;
            printf("%d %d", h, m);
        }
        else if (m >= 45) {
            m = m - 45;
            printf("%d %d", h, m);
        }
    }
    else if (h > 0) {
        if (m < 45) {
            h = h - 1;
            m = m + 60 - 45;
            printf("%d %d", h, m);
        }
        else if (m >= 45) {
            m = m - 45;
            printf("%d %d", h, m);
        }
    }

    return 0;
}

