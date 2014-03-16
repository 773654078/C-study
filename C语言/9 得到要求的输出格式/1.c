#include<stdio.h>
void main()
{
	int a=3,b=4,c=5;
	float x=1.2,y=2.4,z=-3.6,X,Y,Z;
	long u=51274,n=128765;
	char c1='a',c2='b';
	X=x+y;
	Y=y+z;
	Z=z+x;
	printf("a=%d b=%d c=%d\n\n",a,b,c);
	printf("x=%f y=%f z=%f\n\n",x,y,z);
	printf("x+y=%.2f y+z=%.2f z+x=%.2f\n\n",X,Y,Z);// 输出精度在前f加.N  //
	printf("u=%d n=%d\n\n",u,n);// 输出十进制即可  //
	printf(" c1=%c or %d \n c2=%c or %d\n ",c1,c1,c2,c2);
}