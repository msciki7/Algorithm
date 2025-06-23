#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	long long n, m;

	scanf("%lld %lld", &n, &m);

	if (n - m > 0) {
		printf("%lld", n - m);
	}
	else {
		printf("%lld", -(n - m));
	}

	return 0;
}