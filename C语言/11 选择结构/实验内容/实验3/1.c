#include<stdio.h>
main()
{
	
	float x,y;
	printf("\n____计算y=x(x<1),y=2X+1(1<=10)3x-8(x>=10)____\n\n please input x:\n");
	scanf("%f",&x); 
	if(x<1)
		y=x;
	else 
	{
		if(x<10)
			y=2*x+1;          /***!!!  注意用乘号*,而不是直接写在一起   !!!***/
		else 
			y=3*x-8;
				
	}
	
	printf("\n ________  y=%.2f  ________  \n",y);
}

