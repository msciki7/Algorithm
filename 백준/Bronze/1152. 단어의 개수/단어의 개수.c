#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    
    char word[1000000];

    scanf("%[^\n]", word);

    int len = strlen(word);
    int count = 1;

    for (int i = 0; i < len; i++) {
        if (word[i] == ' ')
            count++;
        
    }

    if (word[0] == ' ') 
        count--;
    
    if (word[len - 1] == ' ')
        count--;

    printf("%d", count);
  

    return 0;
}

