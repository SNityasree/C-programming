#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   int flag=0;
       for(int i=2;i<=n/2;i++){
           if(n%i==0)
           {
               flag=1;
               break;
           }
       }
if(flag==0){
    printf("PRIME");
}else{
    printf("NOT A PRIME");;
}
    return 0;
}
