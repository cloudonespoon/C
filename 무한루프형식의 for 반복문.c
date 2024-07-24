#include <stdio.h>

void main()
{
	int num = 1, sum = 0;
	while (num <= 5) {
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num;
		printf("%d\n", sum);
		num++;
	}
	printf("\nResult : num = %d sum = %d\n", num, sum);
}