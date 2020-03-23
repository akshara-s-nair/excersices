#include<stdio.h>
int main()
{
    int i,j,x=1,z,n;
    printf("entr limit");
    scanf("%d",&n);
    for(i=n,x=(n*2)-1;i>=1;i--,x=x-2)
    {	
	printf("\n");
    for(j=1,z=x;j<=i;j++,z=z-2)
     {
       printf("%d ",z);
	   	
	 }
     
	}

	return 0;
}

