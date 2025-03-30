#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SEC_PER_MINUTE 60

int main(void) {

	int n;
	scanf("%d", &n);
	int sum = 0;

	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	printf("%d", sum);
	
	return 0;
}
