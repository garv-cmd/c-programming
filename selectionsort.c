#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j,temp,n;
    scanf("%d",&n);
    int a[20];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if (a[j]>a[j+1]){
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
