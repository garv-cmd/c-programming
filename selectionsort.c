#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j,temp,n,min;
    scanf("%d",&n);
    int a[20];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    min=i;
        for(j=i+1;j<n;j++){
        if (a[j]<a[min])
        min=j;
        }    
    temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
    
    
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
