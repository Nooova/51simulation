#include <reg51.h>

void delay500ms(void){
	unsigned char a,b,c;
	for(c=23;c>0;c--){
		for(b=152;b>0;b--){
			for(a=70;a>0;a--)
			{
			}
		}
	}
}


void main(){
	unsigned char count = 0;
	P2 = 0X01;
	while(1)
	{
		P2 = P2 << 1 ;
		if (P2 == 0x00){
			P2 = 0x01;
			}
		delay500ms();
	}
}

