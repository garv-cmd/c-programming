#include <stdio.h>
#include <stdlib.h>
int dtob(int n);
int main()
{   int n;
printf("enter decimal value - ");
scanf("%d",&n);
printf("binary- %d",dtob(n));

    return 0;
}
int dtob(int a){
if(a==0) return 0;
   else return ((a%3)+10*(dtob(a/3)));

}
