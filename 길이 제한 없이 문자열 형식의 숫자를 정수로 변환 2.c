#include <stdio.h>
void main()
{
	int num = 0, count = 0;
	char num_string[4] = "123";
	while (num_string[count] != 0) {
		num = num * 10 + (num_string[count] - '0');
		count++;
	}
	printf("문자열 %s -> 정수 %d\n", num_string, num);
}