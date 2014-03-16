#include<stdio.h>
void main()
{
	printf("sizeof(char):%d\n",sizeof(char));//字符 1 //
	printf("sizeof(short):%d\n",sizeof(short));//整数 2//
	printf("sizeof(int):%d\n",sizeof(int));
	printf("sizeof(unsigned):%d\n",sizeof(unsigned));
	printf("sizeof(long):%d\n",sizeof(long));
	printf("sizeof(float):%d\n",sizeof(float));//浮点//
	printf("sizeof(double):%d\n",sizeof(double));
}//长度为 1 2 4 4 4 4 8 //