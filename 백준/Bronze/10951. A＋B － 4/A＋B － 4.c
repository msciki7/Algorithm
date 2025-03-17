#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SEC_PER_MINUTE 60

int main(void) {
	
	int a, b;

	while (scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", a + b);
	}
	return 0;
}
