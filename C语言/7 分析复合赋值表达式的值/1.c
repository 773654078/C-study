#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10,b=0;
	system("CLS");
	b=a+=a;
	printf("1.b=a+=a;a=%d,b=%d\n",a,b);// 20  20 复合赋值运算采用右结合方式。即先是a=a+a,再是b=a//
	
	b=a-=a;
	printf("2.b=a-=a;a=%d,b=%d\n",a,b);// 0 0 //
	
	a=10;
	b=a*=2+5;
	printf("3.b=a*=2+5;a=%d,b=%d\n",a,b);// 70 70 //
	
	a=10;
	b=a%=4;
	printf("4.b=a%%=4;a=%d,b=%d\n",a,b);// %在计算中为取余，输出时两个%表示%。2 2 //

	a=10;
	b=a+=a-=a*=a;
	printf("5.b=a+=a-=a*=a;a=%d,b=%d\n",a,b);// -80 -80 !!!计算错误，正确答案为 0 0 //

	a=10;
	b=(a=10,a%=5,a=3);
	printf("6.b=(a=10,a%=5,a=3);a=%d,b=%d\n",a,b);//逗号运算级最低，逗号表达式按照自左而右的顺序计算。 3 3 //
	
	a=10;
	b=(a>10)?(a=12):(a=15);
	printf("7.b=(a>10?(a=12):(a=15); a=%d,b=%d\n",a,b);//条件？满足条件的结果：不满足条件的结果 15 15 //
	
	a=10;
	b=a+++a;
	printf("8.b=a+++a;a=%d,b=%d\n",a,b);// 11 20 先运算赋值，后自加。即b=(a++)+a.//

	a=10;
	b=a+++a++;
	printf("b=a+++a++;a=%d,b=%d\n",a,b);// 12 20 先运算赋值，后自加两次。b=(a++)+(a++)//

	
	return 0;
}
