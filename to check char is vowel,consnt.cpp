#include<stdio.h>
int main()
{
	char c;
	printf("enter a charactr");
	scanf("%c",&c);
	if((c=='a'||c=='e'||c=='i'||c=='o'||c=='u')||(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
	{
	printf("charctr is a vowel");
	}
	else
	printf("is a consonant");
	return 0;
}
