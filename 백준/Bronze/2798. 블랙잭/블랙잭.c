#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	
	int n, m;

	scanf("%d %d", &n, &m);

	int card[100];

	for (int i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}

	int max = -1;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int sum = 0;
			for (int k = j + 1; k < n; k++) {
				sum = card[i] + card[j] + card[k];
				if (max <= sum && sum <= m) {
					max = sum;
				}
			}
		}
	}

	printf("%d", max);

	return 0;
}