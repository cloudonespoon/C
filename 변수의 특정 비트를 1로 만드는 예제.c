#include <stdio.h>
unsigned char ResetBit(unsigned char dest_data, unsigned char bit_num)
{
	if (bit_num < 8) dest_data = dest_data | (0x01 << bit_num);
	return dest_data;
}

void main()
{
	unsigned char lamp_state = 0x77;
	printf("%X->", lamp_state);
	lamp_state = ResetBit(lamp_state, 3);
	printf("%X\n", lamp_state);
}