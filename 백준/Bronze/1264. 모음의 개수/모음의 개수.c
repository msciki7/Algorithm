#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {

	char str[256];
	int cnt;

	while (1) {
		gets(str);
		cnt = 0;

		if (str[0] == '#') {
			break;
		}

		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' ||
				str[i] == 'i' || str[i] == 'I' || str[i] == 'o' ||
				str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
				cnt++;
			}
		}
		printf("%d\n", cnt);


	}

	return 0;

}