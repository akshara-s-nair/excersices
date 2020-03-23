#include<stdio.h>
int main()
{
    int i,j,x=1,z;
    for(i=1,x=1;i<=5;i++,x=x+2)
    {	
	printf("\n");
    for(j=1,z=x;j<=i;j++,z=z-2)
     {
       printf("%d",z);
	   	
	 }
     
	}

	return 0;
}

