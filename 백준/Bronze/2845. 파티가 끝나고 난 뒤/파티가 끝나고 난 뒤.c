#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
   
    int l, p;
    scanf("%d %d", &l, &p);

    int a[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i] - l * p);
    }
  

    return 0;
}

