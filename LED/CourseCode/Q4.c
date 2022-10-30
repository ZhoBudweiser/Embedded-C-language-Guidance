#include <reg51.h>

#define LED P2
#define N 4

typedef unsigned char uint8;
typedef unsigned int uint16;

void Delay100ms(uint8 x);	// 函数声明

uint8 states[N] = {0xDF, 0xDD, 0xEF, 0xCF};	 // 对应LED表示的二进制 20221030

void main()       
{
	uint8 i;
	for (i = 0; ; i = (i + 1) % N) {	// 无限循环
		LED = states[i];
		Delay100ms(1);
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


