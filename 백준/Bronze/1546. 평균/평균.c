#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	
	int n;
	scanf("%d", &n);

	double score[1000];

	double max = -1.0;
	for (int i = 0; i < n; i++) {
		scanf("%lf", &score[i]);
		if (max < score[i]) {
			max = score[i];
		}
	}

	for (int i = 0; i < n; i++) {
		score[i] = score[i] / max * 100;
	}
	
	double avg = 0;

	for (int i = 0; i < n; i++) {
		avg += score[i];
	}

	avg /= n;

	printf("%f", avg);

	return 0;
}