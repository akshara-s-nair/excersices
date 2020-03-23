#include<stdio.h>
void summary(int ,int ,int ,int ,int );
int main()
{
   int q1,q2,q3,q4,q5;
	printf("Quantity of 1122 sold in this week :");
	scanf("%d",&q1);
	printf("Quantity of 2211 sold in this week");
	scanf("%d",&q2);
	printf("Quantity of 2121 sold in this week :");
	scanf("%d",&q3);
	printf("Quantity of  1212 sold in this week");
	scanf("%d",&q4);
	printf("Quantity of 2112 sold in this week :");
	scanf("%d",&q5);
	summary(q1,q2,q3,q4,q5);

   	
	
return 0;
}
void summary(int q1,int q2,int q3,int q4,int q5)
{
	float amnt,total;
	total=0;
  printf("\t\tweekly statemnt\n");
  printf("product no quantity Unit price amount\n");
  amnt=q1*149.00;
  total=total+amnt;
  
  printf("1122 \t\t%d \t149.00 \t%f\n",q1,amnt);
  amnt=q2*225.00;
   total=total+amnt;
  printf("2211 \t\t%d \t225.00 \t%f\n",q2,amnt);
  amnt=q3*499.50;
   total=total+amnt;
  printf("2121 \t\t%d \t499.50 \t%f\n",q3,amnt);
  amnt=q4*224.50;
   total=total+amnt;
  printf("1212 \t\t%d \t224.50 \t%f\n",q4,amnt);
  amnt=q5*343.50;
   total=total+amnt;
  printf("2112 \t\t%d \t343.50 \t%f\n",q5,amnt);
  printf("\t\t\t\t\ttotal %f",total);
  
  
  	
}

