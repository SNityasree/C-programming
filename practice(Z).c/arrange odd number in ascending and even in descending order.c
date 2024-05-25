#include<stdio.h>
int main(){
    int n,ctr;
    printf("enter the no of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("print the element %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(arr[i]>arr[j]){
               ctr=arr[i];
               arr[i]=arr[j];
               arr[j]=ctr;
           }
        }
    }
    printf("ASCENDING ORDER \n");
     for(int i=0;i<n;i++){
         if(arr[i]%2==0){
        printf("%d\n",arr[i]);
     }
     }
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(arr[i]<arr[j]){
               ctr=arr[i];
               arr[i]=arr[j];
               arr[j]=ctr;
           }
        }
    }
    printf("DESCENDING ORDER \n");
     for(int i=0;i<n;i++){
         if(arr[i]%2!=0){
        printf("%d\n",arr[i]);
     }
     }
     return 0;
}

    
