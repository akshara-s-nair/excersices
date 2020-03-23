#include<stdio.h>
int isEven(int num)
{
	if(num == 0)
		return 1;
	else if(num == 1)
		return 0;
	else if(num<0)
		return isEven(-num);
	else
		return isEven(num-2);		
}
int main()
{
	int n;
	printf("Enter  number: ");
	scanf("%d",&n);

	if(isEven(n))
		printf("even number\n");
	else
	   printf("odd number");	


}



