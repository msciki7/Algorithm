#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	
	int n, m;
	scanf("%d %d", &n, &m);

	int min;
	if (n < m)
		min = n;
	else
		min = m;
	
	int lcm;
	for (int i = 1; i <= min; i++) {
		if (n % i == 0 && m % i == 0) {
			lcm = i;
		}
	}

	printf("%d\n%d", lcm, (n * m) / lcm);

	return 0;
}