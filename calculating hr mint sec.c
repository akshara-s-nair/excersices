#include<stdio.h>
int main()
{
	int x,hr,min,sc,tmp;
	printf("entr numbr");
	scanf("%d",&x);
	hr=x/3600;
	tmp=x-hr*3600;
	min=tmp/60;
	sc=tmp-min*60;
	printf("hour=%d mint=%d secnd=%d ",hr,min,sc);
	
	
	
	return 0;
}
