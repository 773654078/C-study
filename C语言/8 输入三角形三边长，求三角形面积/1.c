		/*       printf��%f˵������ȷ�ȿ������float���ֿ������double�͡����ݡ�Ĭ�ϲ���������
				����float�ͻᱻ����Ϊdouble�͡����printf()ֻ�ῴ��˫������������scanf�������
				��ȫ��ͬ�ˣ�������ָ�룬����û�����Ƶ�������������float�洢����double�洢��һ
				������ˣ�scanf����%f��%lf�� 
					Ҳ����˵�����ʱ�򲻹��������˫���Ȼ��ǵ����ȶ���%f��û���ˣ�
				���������ʱ�����뵥����Ҫ��%f������˫����Ҫ��%lf								*/

#include<stdio.h>
#include<math.h>
main()
{
	double a,b,c,s,area;
	printf("input a,b,b\n");
	scanf("%lf %lf %lf",&a,&b,&c);//!!!ע�⣺lf��Ҫд��if  %if��ʾ��ʽΪ˫���ȣ�&��ʾ�����������ַ//
	s=1.0/2*(a+b+c);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%lf\n",area);//!!!ע�⣺lf��Ҫд��if//
}
//�ó���ʹ���˺��׹�ʽ//