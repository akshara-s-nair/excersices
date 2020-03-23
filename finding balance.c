#include<stdio.h>
int main()
{
   int bc,bb,ab,ac;
   printf("entr credit limit b4 recsion");
   scanf("%d",&bc);
   printf("entr balance b4 recvion");
   scanf("%d",&bb);
   ac=bc/2; //halved
   ab=(bc-bb);//credit used
   ab=ab/2;//halved credit used
   ab=(bb/2)-ab;//halved to get balnce amnt
   printf("new credit limit %d ",ac);
   printf("new balnce %d",ab);
return 0;
}
