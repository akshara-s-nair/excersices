#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("enTr sides of triangle");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1==n2&&n2==n3)
	{
		printf("euiltrl trignl");
	}
	else if(n1==n2||n2==n3||n1==n3)
	{
		printf("isoscles tringle");
	}
	else
	printf("scalene traingle");
	
	
	
return 0;
}
