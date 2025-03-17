#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SEC_PER_MINUTE 60

int main(void) {

	int a, b;
	int array[10001];
	scanf("%d %d", &a, &b);

	for (int i = 0; i < a; i++) {
		scanf("%d", &array[i]);
		
	}

	for (int i = 0; i < a; i++) {
		if (b > array[i]) {
			printf("%d ", array[i]);
		}
	}

	return 0;
}
