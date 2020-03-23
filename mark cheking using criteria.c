#include<stdio.h>
int main()
{
	int mat,phy,chm,tot;
	printf("enTr marks in 100");
	scanf("%d %d %d",&mat,&phy,&chm);
	tot=mat+phy+chm;
	printf("total marks %d ",tot);
	if(mat>=60&&phy>=50&&chm>=40)
	{
      if(tot>=200||mat+phy>=150)
       
       
       {
       	printf("is eligible");
	   }
	   else
	   printf("not eligible since total amrk is insuficint");
	}
	else
	printf("not eligible as subjct mark is insuficint");
return 0;
}
