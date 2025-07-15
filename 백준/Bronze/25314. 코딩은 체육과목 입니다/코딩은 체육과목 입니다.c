#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {

	int n;

	scanf("%d", &n);

	for (int i = 0; i < n / 4; i++) {
		printf("long ");
	}
	printf("int");
	

	return 0;
}