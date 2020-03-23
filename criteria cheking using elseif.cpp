#include<stdio.h>
int main()
{
    float arr[10];int n;
    printf("Welcome to Indian Standard Soil Classification System\n");
    printf("size of your grain-size data:");
    scanf("%d",&n);
    printf("Enter the data (mm): ");
    for(int i=0;i<n;i++)
    {
    	scanf("%f",&arr[i]);
	}
	printf("The results of soil classification\n ");
	for(int i=0;i<n;i++)
	{  
	   if(arr[i]>300)
	   printf("%fmm - boulder\n ",arr[i]);
	   else if (arr[i]>=80)
	   printf("%fmm - cobble\n ",arr[i]);
	   else if(arr[i]>=20)
	   printf("%fmm - gravel course\n",arr[i]);
	   else if(arr[i]>=4.75)
	   printf("%fmm - gravel fine \n",arr[i]);
	   else if(arr[i]>=0.075&&arr[i]<=0.424)
	   printf("%fmm - sand fine\n ",arr[i]);
	   else if(arr[i]>=0.002&&arr[i]<=0.74)
	   printf("%fmm - silt\n",arr[i]);
	   else if(arr[i]<0.002)
	   printf("%fmm - clay ",arr[i]);
		
	}
return 0;
}


