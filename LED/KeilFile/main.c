#include <reg51.h>

#define LED P2

typedef unsigned char uint8;
typedef unsigned int uint16;

void Delay100ms(uint8 x);	// ��������

uint8 states[] = {0x00};

void main()       
{
	LED = 0xFE;
	while (1) {

	}
}

void Delay100ms(uint8 x)		// �������壬@12.000MHz
{
	uint8 i, j;
	while (x--) {
		// STC-ISP�Զ����ɵĴ���
		i = 195;
		j = 138;
		do
		{
			while (--j);
		} while (--i);
	}
}


