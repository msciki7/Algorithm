#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    
    char s[100];

    scanf("%s", s);

    int alp[26];

    for (int i = 0; i < 26; i++) {
        alp[i] = -1;
    }

    for (int i = 0; i < strlen(s); i++) {
        int index = s[i] - 'a';
        if (alp[index] == -1) {
            alp[index] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", alp[i]);
    }
    
    return 0;
}

