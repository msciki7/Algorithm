#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    
    int input, result = 0;
    int remain[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        remain[i] = input % 42;
    }

    for (int i = 0; i < 10; i++) {
        int same = 0;
        for (int j = i + 1; j < 10; j++) {
            if (remain[i] == remain[j]) {
                same = 1;
                break;
            }
        }
        if (same == 0)
            result++;
    }
    printf("%d", result);
    
    return 0;
}

