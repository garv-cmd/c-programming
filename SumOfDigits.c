#include <stdio.h>
#include <stdlib.h>
int digits(int);
int main()
{
  int n;
  scanf("%d",&n);
  printf("sum of digits = %d",digits(n));


    return 0;
}
int digits(int n){
if (n<9)return n;
else {return ((n%10) + digits(n/10));
}
}
