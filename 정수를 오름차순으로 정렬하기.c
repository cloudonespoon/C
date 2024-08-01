#include <stdio.h>

void main()
{
	int data[7] = { 6,3,9,7,2,4,1 };
	int i, o,j;
	for (j = 0; j < 6; j++){
		for (i = 0; i < 6; i++) {
			if (data[i] > data[i + 1]) {
				o = data[i + 1];
				data[i + 1] = data[i];
				data[i] = o;
			}
		}
	}
	for (i = 0; i < 6; i++) {
		printf("%d", data[i]);
	}
}