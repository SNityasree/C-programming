#include <stdio.h>
#include<stdbool.h>
bool prime(int n){
    
    if(n==1 || n==0){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int N;
    scanf("%d",&N);
    printf("the prime number from 1 to %d is :\n",N);
    for(int i=1;i<=N;i++){
       if(prime(i))
       printf("%d ",i);
    }
    return 0;
}
   
