#include <stdio.h>
#include <stdlib.h>
void mergesort(int [],int ,int);
void merge(int [],int ,int);
int main()
{
  int n,a[20],i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  mergesort(a,0,n-1);
  for(i=0;i<n;i++){
    printf("%d\t",a[i]);
  }

    return 0;
}
void mergesort(int a[],int s,int e){
if (s>=e) return;
else {
    int mid=(s+e)/2;
    mergesort(a,s,mid);
    mergesort(a,mid+1,e);
    merge(a,s,e);
}
}
void merge(int a[],int s,int e){
int mid=(s+e)/2;
int i=s;
int j=mid+1;
int k=s;
int temp[50];
while(i<=mid&&j<=e){
    if(a[i]<a[j])
        temp[k++]=a[i++];
    else temp[k++]=a[j++];
}
while(i<=mid){
    temp[k++]=a[i++];
}
while(j<=e){
    temp[k++]=a[j++];
}
for(int i=s;i<=e;i++){
    a[i]=temp[i];
}




}
