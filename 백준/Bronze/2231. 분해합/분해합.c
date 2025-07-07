#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	
	int i, n;
	scanf("%d", &n);
	int sum;
	i = 1;
	while (i <= n) {
		int a = i; 
		sum = i;
		while (a > 0) {
			sum = sum + a % 10;
			a = a / 10;
		}
		if (sum == n) {
			printf("%d", i);
			break;
		}
		if (i == n) {
			printf("0");
			break;
		}
		i++;
	}

	return 0;
}