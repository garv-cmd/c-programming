#include <stdio.h>
#include <stdlib.h>
int partition(int [], int ,int);
void quicksort(int [],int , int);
int main()
{int i,n,a[20];
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int low=0;
    int high;
    high=n-1;
quicksort(a,low,high);
for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}
    return 0;
}
int partition(int a[],int low, int high){
int pivot,i,j,temp,t2;
pivot=a[high];
i=low-1;
for(j=low;j<=high-1;j++){
    if (a[j]<=pivot){
        i=i+1;
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        }}
t2=a[i+1];
a[i+1]=a[high];
a[high]=t2;
return i+1;
}
void quicksort(int a[],int low,int high){
    int index;
if (low<high){
    index=partition(a,low,high);
    quicksort(a,low,index-1);
    quicksort(a,index+1,high);
}
}
