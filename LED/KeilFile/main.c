#include <reg51.h>
#include <intrins.h>

#define LED P2

typedef unsigned char uint8;
typedef unsigned int uint16;

void Delay100ms(uint8 x);

uint8 code states[] = {0xDF, 0xDD};

void main()       
{
	uint8 i;
	LED = 0x65;
	while (1) {
		for (i = 0; i < 2; i++) {
			LED = states[i];
			Delay100ms(20);
		}	
	}
	while(1);
}

void Delay100ms(uint8 x)		//@12.000MHz
{
	unsigned char i, j;

	while (x) {
		i = 195;
		j = 138;
		do
		{
			while (--j);
		} while (--i);
		x--;
	}

}
