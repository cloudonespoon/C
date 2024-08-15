#include <stdio.h>
int main()
{
	for (int i = 5; i > 0; i--) {
		for (int j = 0; j < i * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
		for (int a = 0; a <= 5 - i; a++) {
			printf(" ");
		}
	}
	return 0;
}