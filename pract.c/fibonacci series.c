//print unit digit of fibonacci series eg i/p:2 o/p:1 (1,1,2,3,5,...)
#include<stdio.h>
int main(){
    int n;
    int a=1,b=1,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        a=b;
        b=c;
        c=a+b;
        
    }
    printf("%d",c%10);
}
