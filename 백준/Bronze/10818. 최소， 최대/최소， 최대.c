#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int arr[1000000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0]; 
    int min = arr[0];

    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    printf("%d %d", min, max);
   
    return 0;
}

