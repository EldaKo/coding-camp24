#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
	int k = 0;
	scanf("%d", &k);

	for (int i = 0; i < k; i++) {
		if (i % 2 != 0) {
			printf("%d ", i);
		}
	}
   
}
