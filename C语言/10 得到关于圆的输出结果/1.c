#include<stdio.h>
#include<math.h>
void main()
{
float r,h,C,S,S1,V1,V;
printf("����� r h:\n");
scanf("%f %f",&r,&h);
C=3.14*2*r;
S=3.14*pow(r,(2));//pow(a,(n)),��ʾa��n�η�//
S1=3.14*pow(r,(2))*4/3;
V1=3.14*pow(r,(3))*1/3;
V=S*h;
printf("\n\n C=%.2f \n S=%.2f \n S1=%.2f \n V1=%.2f \n V=%.2f \n\n",C,S,S1,V1,V);
//��һ������������ʽ���󽫵�����������������//
}