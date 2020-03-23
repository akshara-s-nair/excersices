#include <stdio.h>
int main()

{
  int h,ts,n,i,arr[10];
  float c;
  printf("entr no of steel");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  
  printf("entr hardnes");
  scanf("%d",&h);
  printf("entr tensile strnght");
    scanf("%d",&ts);
  printf("entr carbon content");
    scanf("%f",&c);
    if(h>50&&c<0.7&&ts>5600)
    arr[i]=10;
    else if(h>50&&c<0.7)
  arr[i]=9;
    else if(c<0.7&&ts>5600)
   arr[i]=8;
     else if(h>50&&ts>5600)
   arr[i]=7;
     else if(h>50||c<0.7||ts>5600)
      arr[i]=6;
    else 
   arr[i]=5;
    printf("\n");
}
 printf("grades\t:");
 for(i=0;i<n;i++)
 {
 	printf("%d\t",arr[i]);
 }
  return 0;
}
