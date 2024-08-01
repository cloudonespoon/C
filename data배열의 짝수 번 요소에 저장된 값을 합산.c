#include <stdio.h>

void main()
{
	short data[9] = { 4,6,9,8,7,2,5,1,3 };
	int i, o;

	for (i = 0; i < 8; i++) {
		if (data[i] > data[i + 1]) o = data[i];
		else o = data[i + 1];
	}
	printf("%d", o);
}