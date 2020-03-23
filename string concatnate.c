#include <stdio.h>
#include <string.h>
int main()
{
  char str1[] =“Face“, str2[] = “Prep”;
	strcat(str1,str2);
printf(“After concatenation : “);
puts(str1);
printf(“After concatenation : “,str1);
return 0;
}
