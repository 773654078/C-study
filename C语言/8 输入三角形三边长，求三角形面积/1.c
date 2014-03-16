		/*       printf的%f说明符的确既可以输出float型又可以输出double型。根据“默认参数提升”
				规则float型会被提升为double型。因此printf()只会看到双精度数。对于scanf，情况就
				完全不同了，它接受指针，这里没有类似的类型提升。向float存储和向double存储大不一
				样，因此，scanf区别%f和%lf。 
					也就是说输出的时候不管输出的是双精度还是单精度都用%f就没错了，
				但是输入的时候，输入单精度要用%f而输入双精度要用%lf								*/

#include<stdio.h>
#include<math.h>
main()
{
	double a,b,c,s,area;
	printf("input a,b,b\n");
	scanf("%lf %lf %lf",&a,&b,&c);//!!!注意：lf不要写成if  %if表示格式为双精度，&表示给变量分配地址//
	s=1.0/2*(a+b+c);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%lf\n",area);//!!!注意：lf不要写成if//
}
//该程序使用了海伦公式//