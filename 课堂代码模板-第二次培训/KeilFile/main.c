#include <reg51.h>

sbit LED0 = P2^0;

void main()       
{
	LED0 = 0;
	while(1);
}

