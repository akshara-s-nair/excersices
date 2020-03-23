#include <stdio.h>
int main()

{
  int i,j;
  for(i=10;i>=0;i--)
  { 
      for(j=10;j>=0;j--)
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
