#include <stdio.h>
int main()
{
  int wekday,weknd,m,x,y;
  float t,pt;
  printf("entr weekday mints");
  scanf("%d",&wekday);
  printf("entr weekend mints");
  scanf("%d",&weknd);
  if(wekday>600)
  {
	 m=wekday-600;
	 x=m*1.50+250;
	 
  }
  else
  x=250;
  if(weknd>600)
  {
	 m=weknd-600;
	 y=m*2.00+300;
	 
  }
  else
  y=300;
  pt=x+y;
  t=(pt*5.25)/100;
  printf("Chatflow Wireless Monthly Bill\n");
   printf("Weekday minutes:%d\n",wekday);
    printf("Weekend minutes:%d\n",weknd) ;
    printf("Weekday bill:%d\n",x);
	 printf("Weekend bill:%d\n",y);
	 printf("Pre-tax bill:%f\n",pt);
	 printf("Tax (5.25%) :%f\n",t); 
	  printf("Total bill :%f",pt+t); 
    
  return 0;
}
