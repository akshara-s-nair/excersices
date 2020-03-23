#include<stdio.h>
int main()
{
	int n,i,j,t,p,a;
	printf("enter your limit of elemnts  ");
	scanf("%d",&n);
	int arr[n];
	printf("entr elmnts");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("elmnts are :");
	for (i=0;i<n;i++)
    {
        printf(" %d\n",arr[i]);	
	}	
    for (i = 0;i<n;i++) 
        {
 
            for (j=i+1;j<n;++j)
            {
 
                if (arr[i]>arr[j]) 
                {
 
                    t =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;
                }
          	}
        }
        printf("The srted array is :");
        for (i=0;i<n;++i)
           {
           	 printf("%d\n",arr[i]);
			} 
	printf("set of elemnts are\n");
	printf("{}");
    for(i=0;i<n;i++)   
    {
    	printf("{%d}",arr[i]);
	}
	 for(i=0;i<n;i++)   
    {
    	printf("{%d,%d}",arr[i],arr[i+1]);
	}
    for(i=0;i<n;i++)   
    {
    	printf("{%d,%d,%d}",arr[i],arr[i+1],arr[i+2]);
	}

	return 0;
}
