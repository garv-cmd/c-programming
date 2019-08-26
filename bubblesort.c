#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,i,j,temp;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
//bubble sort
for(i=1;i<n;i++){
    for(j=0;j<n-i;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
for(i=0;i<n;i++){
        printf("%d\t",a[i]);
}
    return 0;
}
