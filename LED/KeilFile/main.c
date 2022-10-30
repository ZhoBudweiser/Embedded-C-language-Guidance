#include <reg51.h>
#include <intrins.h>	// ʹ����λ������Ҫ�����ͷ�ļ�

#define LED P2

typedef unsigned char uint8;
typedef unsigned int uint16;

void Delay100ms(uint8 x);	// ��������

void main()       
{
	uint8 val = 0xFE;	 // ��λ�⺯������Ҫ����Ĳ���
	bit dir = 0;		// ��ˮ�������ķ��򣬳�ʼ��Ϊ����
	uint8 state = 0;	// ״̬

	LED = 0xFE;
	while (1) {
/*
		// ����һ��λ����
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
			while (j--)			// ��ʱ
				while (i--);
		}
*/
/*
		// ���������⺯�����ܹ�ʵ�ָ����ӵ���ʽ
		uint8 i, j;
		while (1) {
			LED = val;
			val = _crol_(val, 1);
			while (j--)			// ��ʱ
				while (i--);
		}
*/
/*
		// ���������⺯����ʵ�ֶ෽����ˮ
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
		// ��������״̬��
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


