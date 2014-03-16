#include<stdio.h>
int main()
{
	int a,b,c,d;
	a=10;
	b=a++;
	c=++a;
	d=10*a++;
	printf("a,b,c,d:%d,%d,%d,%d,\n",a,b,c,d);
	return 0;
}
//
1.a为10，
2.先给b赋值10，再给a加1，此时a为11
3.先给a加1，此时a为12，再为c赋值，此时c值为12
4.先乘后赋值再给a加1，d=120,a=13
输出最后结果
13 10 12 120
//
