#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SEC_PER_MINUTE 60


int main(void) {

	int a, b, c, d, e;
	int f;
	
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	f = (a*a + b*b + c*c + d*d + e*e) % 10;
	
	printf("%d", f);
	

	return 0;
}
