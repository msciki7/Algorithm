#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    
    int dis1, dis2, dis3, dis4;

    scanf("%d", &dis1);
    scanf("%d", &dis2);
    scanf("%d", &dis3);
    scanf("%d", &dis4);

    int total = dis1 + dis2 + dis3 + dis4;

    printf("%d\n%d", total / 60, total % 60);

    return 0;
}

