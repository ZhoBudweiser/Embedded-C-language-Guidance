#include <reg51.h>

#define LED P2

typedef unsigned char uint8;
typedef unsigned int uint16;

void Delay100ms(uint8 x);	// 函数声明

uint8 states[] = {0x00};

void main()       
{
	LED = 0xFE;
	while (1) {

	}
}

void Delay100ms(uint8 x)		// 函数定义，@12.000MHz
{
	uint8 i, j;
	while (x--) {
		// STC-ISP自动生成的代码
		i = 195;
		j = 138;
		do
		{
			while (--j);
		} while (--i);
	}
}


