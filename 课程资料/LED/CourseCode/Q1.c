#include <reg51.h>

/*
// ��̫�����ķ���
sbit LED0 = P2^0;
sbit LED1 = P2^1;
sbit LED2 = P2^2;
sbit LED3 = P2^3;
sbit LED4 = P2^4;
sbit LED5 = P2^5;
sbit LED6 = P2^6;
sbit LED7 = P2^7;
*/

// ���ķ���
#define LED P2

void main()       
{
/*
	// ��̫�����ķ���
	LED7 = 0; 
	LED6 = 1;   
	LED5 = 1; 
	LED4 = 0; 
	LED3 = 0; 
	LED2 = 1; 
	LED1 = 0; 
	LED0 = 1;
*/
	LED = 0x65;
	// ������ 5 λ
	LED &= ~(1 << 5);
	// Ϩ��� 5 λ
	LED |= (1 << 5); 
	while(1);
}

