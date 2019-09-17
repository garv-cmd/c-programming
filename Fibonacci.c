#include <stdio.h>
#include <stdlib.h>
int fibo(int );

int main()
{   int a;
int i=0,c;
scanf("%d",&a);
 for (c=1;c<=a;c++)
  {
printf("%d\t",fibo(i));
i++;
}
    return 0;
}
int fibo(int n){
int i;
if (n==0)return 0;
else if (n==1)return 1;
else return (fibo(n-1)+fibo(n-2));
}
