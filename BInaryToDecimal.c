#include <stdio.h>
#include <stdlib.h>
int btod(int n);
int main()
{
   int n;
   printf("enter binary digits - ");
   scanf("%d",&n);
   printf("number is %d ",btod(n));
    return 0;
}int i=0;
int btod(int n){
if (n==0)return 0;
else return ((n%10)*pow(2,i++)+btod(n/10));

}
