#include <REGX51.H>
#include "delay_ms.h"
char kayboard()//––…®√Ë
{
	char i;
	i=-1;
	P1=0xff;P1_4=0;
	if(P1_0==0){delay_ms(10);while(P1_0==0);delay_ms(10);i=4;}
	if(P1_1==0){delay_ms(10);while(P1_1==0);delay_ms(10);i=8;}
	if(P1_2==0){delay_ms(10);while(P1_2==0);delay_ms(10);i=12;}
	if(P1_3==0){delay_ms(10);while(P1_3==0);delay_ms(10);i=16;}
	P1=0xff;P1_5=0;
	if(P1_0==0){delay_ms(10);while(P1_0==0);delay_ms(10);i=3;}
	if(P1_1==0){delay_ms(10);while(P1_1==0);delay_ms(10);i=7;}
	if(P1_2==0){delay_ms(10);while(P1_2==0);delay_ms(10);i=11;}
	if(P1_3==0){delay_ms(10);while(P1_3==0);delay_ms(10);i=15;}
	P1=0xff;P1_6=0;
	if(P1_0==0){delay_ms(10);while(P1_0==0);delay_ms(10);i=2;}
	if(P1_1==0){delay_ms(10);while(P1_1==0);delay_ms(10);i=6;}
	if(P1_2==0){delay_ms(10);while(P1_2==0);delay_ms(10);i=0;}
	if(P1_3==0){delay_ms(10);while(P1_3==0);delay_ms(10);i=14;}
	P1=0xff;P1_7=0;
	if(P1_0==0){delay_ms(10);while(P1_0==0);delay_ms(10);i=1;}
	if(P1_1==0){delay_ms(10);while(P1_1==0);delay_ms(10);i=5;}
	if(P1_2==0){delay_ms(10);while(P1_2==0);delay_ms(10);i=9;}
	if(P1_3==0){delay_ms(10);while(P1_3==0);delay_ms(10);i=13;}
	return i;
}