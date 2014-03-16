#include<stdio.h>
main()
{
	float score;
	char grade;
	printf("\nplease input a student score:\n\n");
	scanf("%f",&score);
	if(score>100||score<0)
		printf("\n input error! \n");
	else
	{
		if(score>=90)
			grade='A';
		else
		{
			if(score>=80)
				grade='B';
			else
			{
				if(score>=70)
					grade='C';
				else
				{
					if(score>=60)
						grade='D';
					else grade='E';
				}
			}
		}
		printf("\a\n the student grade:%c \n",grade);
	}
}

