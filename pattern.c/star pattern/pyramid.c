#include<stdio.h>
int main(){
    int n,i,j,sp;
    scanf("%d",&n);
    int n1=n;
    for(i=0;i<n*2;i=i+2){
        for(sp=n1;sp>0;sp--)
            printf("  ");
            for(j=0;j<=i;++j)
        {
         printf("* ");   
        }
        printf("\n");
        n1--;
    }
}
