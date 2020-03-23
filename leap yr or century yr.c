#include<stdio.h>
int main()
{
	int n1;
    printf("enter a year");
    scanf("%d",&n1);
    if(n1%100==0)
    {
    	if(n1%400==0)
    	{
    		printf("this is leap yr");
		}
		else
		{
			printf("this is not a leap yr bt century yer");
	    }
	}
	else
	{
		if(n1%4==0)
		{
			printf("this is leap yr");
		}
		else
		{
			printf("not a leap yr");
		}
	}
	return 0;
}
