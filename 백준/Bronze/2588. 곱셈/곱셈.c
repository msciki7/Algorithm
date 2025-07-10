#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {

	int n, m;
	scanf("%d %d", &n, &m);

	int mul = 0;
	int dig = 1;
	while (m > 0) {
		int temp = m % 10;
		mul = dig * (temp * n) + mul;
		printf("%d\n", temp * n);
		m /= 10;
		dig *= 10;
	}
	printf("%d\n", mul);

	return 0;
}