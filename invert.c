#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*int num,n,res;
   scanf("%d",&num);
   scanf("%d",&n);
   res=num ^ (1<<n);
   printf("%d",res);*/
   int num;
   scanf("%d",&num);
   if (num&1==1)
    printf("set");
   else printf("unset");

    return 0;
}
