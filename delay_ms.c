#include <intrins.h>
void delay_ms(int C)		//@12.000MHz
{
	int k;
	unsigned char i, j;
	for(k=0;k<C;k++)
	{
			i = 2;
			j = 239;
			do
		{
			while (--j);
		}while (--i);
	}
}