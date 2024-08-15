#include <stdio.h>
void main()
{
	for (int i = 1; i < 6; i++) {
		for (int a = 4; a >= i; a--) {
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}