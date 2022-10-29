#include <reg51.h>

#define LED P2

typedef unsigned char uint8;
typedef unsigned int uint16;

void main()       
{
/*
	// 版本一：降频插入语句延时（请勿模仿）
	long a = 10;
	LED = 0x65;
	a = 10*a;		// 乘法语句的执行速度慢于加法
	LED = ~LED;		// 将所有位翻转
	a = 10*a;
	LED = ~LED;
	a = 10*a;
	LED = ~LED;
	a++;
	LED = ~LED;
	a++;
	LED = ~LED;
*/
	// 版本二：循环结构
/*
	// 不断闪烁
	uint8 i, j;
	while (1) {
		LED = ~LED;
		i = 255;
		j = 255;
		while (j--)
			while (i--);
	}
*/
	// 指定次数

	// 死循环方式
	uint8 count = 0;
	uint8 i, j;
	while (1) {
		LED = ~LED;		
		i = 255;
		j = 255;
		while (j--)			// 延时
			while (i--);
		count++;			// 判断次数
		if (count == 5) {
			break;
		}
	}
/*
	// 条件控制方式
	uint8 count = 5;
	uint8 i, j;
	while (count--) {
		LED = ~LED;
		i = 255;
		j = 255;
		while (j--)
			while (i--);
	}
*/
	while(1);
}

