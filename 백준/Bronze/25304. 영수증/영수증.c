#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {

	int x;
	scanf("%d", &x);

	int n;
	scanf("%d", &n);

	int a, b;
	int sum = 0;
	while (n > 0) {
		scanf("%d %d", &a, &b);

		sum += a * b;

		n--;
	}

	if (sum == x)
		printf("Yes");
	else
		printf("No");

	return 0;
}