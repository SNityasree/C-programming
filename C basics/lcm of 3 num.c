#include<stdio.h>
int main(){
 int a,b,c;
 printf("Enter the three number:\n");
 scanf("%d %d %d",&a,&b,&c);
 int m=2;
 while(1){
 if(m%a==0 && m%b==0 && m%c==0){
     printf("the lcm of the 3 number is %d",m);
     break;
 }
 ++m;
}
}
