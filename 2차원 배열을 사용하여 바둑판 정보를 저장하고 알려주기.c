#include <stdio.h>

void main()
{
	short data[9] = { 4,6,9,8,7,2,5,1,3 };
	int i, s;

	for (i = 0, i < 9; i + 2) {
		s = s + data[i];
	}
	printf("%d", s);
}