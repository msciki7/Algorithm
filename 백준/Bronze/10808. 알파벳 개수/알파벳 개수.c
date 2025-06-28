#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    
    char a[100];

    scanf("%s", a);

    int arr[26] = { 0 };

    for (int i = 0; i < strlen(a); i++) {
        for (int j = 0; j < 26; j++) {
            if (a[i] - 'a' == j) {
                arr[j]++;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

