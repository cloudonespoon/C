#include <stdio.h>

void main()
{
	int count;
	for (count = 1; count <= 9; count++) {
		printf("2 * %d = ", count);
		int sum = 2 * count;
		printf("%d\n", sum);
	}
}