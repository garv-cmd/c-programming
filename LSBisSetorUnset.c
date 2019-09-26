#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
   scanf("%d",&num);//scan number
   if (num&1==1)
    printf("set");
   else printf("unset");
    return 0;
}
