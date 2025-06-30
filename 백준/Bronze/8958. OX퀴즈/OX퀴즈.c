#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    
    int n;
    scanf("%d", &n);

    char test[80];

    for (int i = 0; i < n; i++) {
        scanf("%s", test);
        int score = 1;
        int sum = 0;
        for (int j = 0; j < strlen(test); j++) {
            if (test[j] == 'O') {
                sum += score;
                score++;
            }
            if (test[j] == 'X')
                score = 1;
        }
        printf("%d\n", sum);
    }

  

    return 0;
}

