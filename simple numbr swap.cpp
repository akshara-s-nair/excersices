#include<stdio.h>
int main()
{
   int a,b;
   printf("entr ur number");
   scanf("%d %d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("numbers are a=%d b=%d ",a,b);
return 0;
}
