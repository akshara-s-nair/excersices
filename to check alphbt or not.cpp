#include<stdio.h>
int main()
{
	char op;
	printf("entr ur elemnt");
	scanf("%c",&op);
    if((op>='a'&&op<='z')||(op>='A'&&op<='Z'))
    printf("alphabet");
    else
    printf("not an alphabet");
return 0;
}
