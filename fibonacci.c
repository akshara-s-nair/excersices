#include <stdio.h>
int main()

{
  int f=1,s=0,t=0,n,sum=0;
  printf("entr limit ");
  scanf("%d",&n);
  t=f+s;
  while(t<n)
  {

  f=s;
  s=t;
  printf("%d\t",t);
  t=f+s;
  if(t%2==0)
  sum=sum+t;
  if(t>4613732)
  break;
  
}
printf("sum is %d",sum);
 return 0;
}
