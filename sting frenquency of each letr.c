#include<stdio.h>
#include<string.h>
int main()
{
   char arr[100], ch;
   int c = 0, count[26] = {0};
   printf("Enter a string\n");
   gets(arr);
   while ( arr[c] != '\0' )
   {
     if ( arr[c] >= 'a' && arr[c] <= 'z' ) 
     count[arr[c]-'a']++;
     c++;
   }
   for ( c = 0 ; c < 26 ; c++ )
   {
      if( count[c] != 0 )
        printf("%c occurs %d times .\n",c+'a',count[c]);
   }
return 0;
}
 
