#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	
	int n;
	scanf("%d", &n);
	
	int cnt = 0;

	cnt += n / 5;
	cnt += n / 25;
	cnt += n / 125;
	printf("%d", cnt);

	return 0;
}