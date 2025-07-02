#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    
    int note[8];

    for (int i = 0; i < 8; i++) {
        scanf("%d", &note[i]);
    }
    
    int flag = 0;

    if (note[0] == 1) {
        for (int i = 1; i < 8; i++) {
            if (note[i] == i + 1)
                flag = 1;
            else {
                flag = 0;
                break;
            }
        }
  
    }
    else if (note[0] == 8) {
        for (int i = 1; i < 8; i++) {
            if (note[i] == 8 - i)
                flag = 2;
            else {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 0)
        printf("mixed");
    else if (flag == 1)
        printf("ascending");
    else
        printf("descending");

    
    return 0;
}

