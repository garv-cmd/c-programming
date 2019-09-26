#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,n,res;
   scanf("%d",&num);
   scanf("%d",&n);
   res=num ^ (1<<n);
   printf("%d",res);
   

    return 0;
}
