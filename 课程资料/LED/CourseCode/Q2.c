#include <reg51.h>

#define LED P2

typedef unsigned char uint8;
typedef unsigned int uint16;

void main()       
{
/*
	// �汾һ����Ƶ���������ʱ������ģ�£�
	long a = 10;
	LED = 0x65;
	a = 10*a;		// �˷�����ִ���ٶ����ڼӷ�
	LED = ~LED;		// ������λ��ת
	a = 10*a;
	LED = ~LED;
	a = 10*a;
	LED = ~LED;
	a++;
	LED = ~LED;
	a++;
	LED = ~LED;
*/
	// �汾����ѭ���ṹ
/*
	// ������˸
	uint8 i, j;
	while (1) {
		LED = ~LED;
		i = 255;
		j = 255;
		while (j--)
			while (i--);
	}
*/
	// ָ������

	// ��ѭ����ʽ
	uint8 count = 0;
	uint8 i, j;
	while (1) {
		LED = ~LED;		
		i = 255;
		j = 255;
		while (j--)			// ��ʱ
			while (i--);
		count++;			// �жϴ���
		if (count == 5) {
			break;
		}
	}
/*
	// �������Ʒ�ʽ
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

