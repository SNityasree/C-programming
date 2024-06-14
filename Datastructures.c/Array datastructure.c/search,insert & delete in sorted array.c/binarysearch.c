#include <stdio.h>
int binarysearch(int arr[],int n,int search,int l,int r){
    while(l<=r){
    int mid=(l+r)/2;
    if(search==arr[mid])
      return mid;
    else if(search<arr[mid])
       return binarysearch(arr,n,search,l,mid-1);
     else 
       return binarysearch(arr,n,search,mid+1,r);
    }
    return -1;
}
int main() {
    int n,mid;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d element\n :",n);
    for(int i=0;i<n;i++){
        printf("\nEnter element %d :",i+1);
    scanf("%d",&arr[i]);
    }
    int search;
    printf("enter searching element:");
    scanf("%d",&search);
    int result=binarysearch(arr,n,search,0,n-1);
    if(result==-1)
        printf("%d is not found",search);
    else
        printf("the %d element is %d",result+1,search);
}
