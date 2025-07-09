#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	
	int a, b, v;
	int day;

	scanf("%d %d %d", &a, &b, &v);

	day = (v - b - 1) / (a - b) + 1;
	printf("%d", day);

	return 0;
}