#include<stdio.h>
#include <ace/Log_Msg.h>
int max(int x,int y);
void main()
{
	int a,b,c,i;
	i=1;
	while(i=1)
		{
			printf("input a & b : ");
			scanf("%d %d",&a,&b);
			c=max(a,b);
			printf("max=%d\n",c);
			printf("\n\n");
		}
}
int max(int x,int y)
{
	int z;
	if(x>y)
		z=x;
	else
		z=y;
	return(z);
}