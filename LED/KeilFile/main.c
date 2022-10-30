#include <reg51.h>
#include <intrins.h>	// 使用移位函数需要引入的头文件

#define LED P2

typedef unsigned char uint8;
typedef unsigned int uint16;

void Delay100ms(uint8 x);	// 函数声明

void main()       
{
	uint8 val = 0xFE;	 // 移位库函数所需要输入的参数
	bit dir = 0;		// 流水灯流动的方向，初始化为左移
	uint8 state = 0;	// 状态

	LED = 0xFE;
	while (1) {
/*
		// 方案一：位运算
		uint8 i, j;
		while (1) {
			LED = ~LED;
			LED <<= 1;
			if (LED == 0x00) {
				LED = 0x01;
			}
			LED = ~LED;		
			i = 255;
			j = 255;
			while (j--)			// 延时
				while (i--);
		}
*/
/*
		// 方案二：库函数，能够实现更复杂的样式
		uint8 i, j;
		while (1) {
			LED = val;
			val = _crol_(val, 1);
			while (j--)			// 延时
				while (i--);
		}
*/
/*
		// 方案二：库函数，实现多方向流水
		while (1) {
			if (dir == 0) {
				val = _crol_(val, 1);
				LED = val;
				Delay100ms(5);	
			} else if (dir == 1) {
				val = _cror_(val, 1);
				LED = val;
				Delay100ms(5);	
			}
			if (val == 0xFE || val == 0x7F) {
				dir = ~dir;
			}
		}
*/
///*
		// 方案三：状态机
		while (1) {
			switch (state) {
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					LED = val;
					Delay100ms(5);
					val = _crol_(val, 1);
					break;
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
					LED = val;
					Delay100ms(5);
					val = _cror_(val, 1);
					break;
			}
			state = (state + 1) % 14;
		}
//*/
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


