#include<stdio.h>
int main()
{
    int i,j,x=0;
    for(i=1;i<=5;i++)
    { x=0;
    if(i%2==0)
    {
    	x=1;
	}
	else x=0;
	
	printf("\n");
    for(j=1;j<=i;j++)
    { 
     if( x==1)
      x=0;
      else x=1;
      printf("%d",x);
    	
	}
}
	return 0;
}

