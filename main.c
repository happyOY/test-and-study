#include <REGX51.H>
#include "delay_ms.h"
#include "kayboard.h"
char t=0,KK[4],i=-1;
void main()
{
	char k;
	unsigned char Nixie[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0xbf};
	unsigned char AA[]={0x01,0x02,0x04,0x08};
	EA=1;
	EX0=1;
	P0=0x00;
while(1)
{
			P2=0x00;
			P1=0xff;P1_4=0;
			P1=0xff;P1_5=0;
			P1=0xff;P1_6=0;
			P1=0xff;P1_7=0;
			for(k=0;k<t;k++)
			{
				P2=AA[k];
				P0=Nixie[KK[k]];
				delay_ms(2);
			}
}
}
void show() interrupt 0
{
	int m;
	i=kayboard();
	if(i<10)
	{
		if(t==4)
		{
			for(m=3;m>0;m--)
			{
				KK[m]=KK[m-1];
			}
			KK[0]=i;
		}
		else
		{
			KK[t]=i;
			t++;
		}
	}
	if(i==16)//F¼üÇå¿Õ
	{
		t=0;
	}
	if(i==15)//E¼ü-----
	{
		for(m=0;m<4;m++)
		{
			KK[m]=10;
		}
	}
}