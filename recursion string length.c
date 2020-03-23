#include <stdio.h> 
int len(char*s)     
{ 
	if (*s=='\0')  
        return 0; 
    else
        return 1+len(s+1);  
}
int main() 
{ 
   char s[1000];
 int i;
 printf("Enter a string: ");
 scanf("%s",&s);
 printf("Length of string: %d", len(s));

return 0;
}
