#include<stdio.h>
main()
{
	float score;
	int n;
	char grade;
	printf("\n\n input a student score:");
	scanf("%f",&score);
	if(score<0||score>100)
		printf("\n input error! \n");
	else
	{
		n=score/10;
		switch(n)
		{
			case 10:
			case 9:	grade='A'; break;
			case 8: grade='B'; break;
			case 7: grade='C'; break;
			case 6: grade='D'; break;
			default: grade='E';
		}
		printf("\n\a the student score:%c \n",grade);
	}
}

