#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a[20],low,high,mid,num;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter num to locate: ");
    scanf("%d",&num);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(high+low)/2;
        if (num==a[mid]){
            printf("%d found at %d index",num,mid);
            break;}
        else if (num>a[mid])
            low=mid+1;
        else
            high=mid-1;

    }
    return 0;
}
