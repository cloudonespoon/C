#include <stdio.h>
void Test(int* p)
{
	*p = 5;
}

void main(void)
{
	int tips = 0;
	Test(&tips);
	printf("%d", tips);
}