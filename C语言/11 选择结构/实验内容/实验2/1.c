#include<stdio.h>
main()
{
	int i=1;
	while(i=1)
	{
		double a,b,c,max;
		printf("\n____compare the value of a,b,c____ \n please input a,b,c: \n");
		scanf("%lf %lf %lf",&a,&b,&c);
		if(a>=b)
			if(a>=c)
				max=a;
			else
			{
				max=c;
			}
		else
			if(b>=c)
				max=b;
			else
			{
				max=c;
			}
		printf("\n max=%.2lf \n__________________________________\n",max);
	}
}
	



