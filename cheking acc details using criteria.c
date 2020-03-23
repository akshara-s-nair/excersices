#include<stdio.h>
int main()
{
	char acct,lvl;
	float balnc,rate,amnt;
	
	printf("entr acc type(P/B) AND entr level(G/S/P)");
	scanf("%c %c",&acct,&lvl);
	printf("entr you balnc");
	scanf("%f",&balnc);

	
	
	if(acct=='P')
	{  
	    if(lvl=='S')
	    {
		
			rate=(balnc*1.2)/100;
	        amnt=balnc+rate;
	    }
	    else if(lvl=='G')
	    {
	    	if(balnc>=5000)
	    	{
	    		rate=(balnc*2.3)/100;
	    		amnt=balnc+rate;
			}
	    	else if(balnc>=1000)
	    	{
	    		rate=(balnc*1.9)/100;
	    		amnt=balnc+rate;
			}
			else
			amnt=balnc;
		}
		else
		printf("wrong option");
	}
	else if(acct=='B')
	{ 
	   if(lvl=='S')
	   {
	   	if(balnc>=1500)
	   	{
	   			rate=(balnc*1.7)/100;
	    		amnt=balnc+rate;
		   }
		   else
		   amnt=balnc;
	   }
	   else if(lvl=='P')
	   {
	   	if(balnc>10000)
	   	{
	   			rate=(balnc*2.5)/100;
	    		amnt=balnc+rate;
		   }
		   else
		   amnt=balnc;
	   }
	}
	printf("wrong option");
	printf("amount is %f",amnt);
return 0;
}
