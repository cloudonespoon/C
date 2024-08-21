	#include <stdio.h>
	void main()
	{
		char a = 0x12, b = 0x34;
		short c = 0x5678;
		int t;
		char* tp = (char*)&t;
		*(short*) tp = c;
		tp+=2;
		*tp = b;
		tp+=1;
		*tp = a;
		printf("0x%X", t);
	}