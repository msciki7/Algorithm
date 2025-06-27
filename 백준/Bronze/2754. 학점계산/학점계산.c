#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
   
    char grade[3];

    scanf("%s", grade);

    double score;

    if (grade[0] == 'A') {
        if (grade[1] == '+')
            score = 4.3;
        else if (grade[1] == '0')
            score = 4.0;
        else if (grade[1] == '-')
            score = 3.7;
    }
    else if (grade[0] == 'B') {
        if (grade[1] == '+')
            score = 3.3;
        else if (grade[1] == '0')
            score = 3.0;
        else if (grade[1] == '-')
            score = 2.7;
    }
    else if (grade[0] == 'C') {
        if (grade[1] == '+')
            score = 2.3;
        else if (grade[1] == '0')
            score = 2.0;
        else if (grade[1] == '-')
            score = 1.7;
    }
    else if (grade[0] == 'D') {
        if (grade[1] == '+')
            score = 1.3;
        else if (grade[1] == '0')
            score = 1.0;
        else if (grade[1] == '-')
            score = 0.7;
    }
    else if (grade[0] == 'F')
        score = 0.0;

    printf("%0.1lf", score);

    return 0;
}
