#include <stdio.h>
int main()

{
  int i,j;
  for(i=1;i<=10;i++)
  { 
      for(j=10;j>=1;j--)
      { 
        if(j>i)
          printf(" ");
          else
          printf("*");
      }
      
      printf("\n");
  }
 
  return 0;
}
