#include<stdio.h>
int main(){
    int n,i,j,sp;
    scanf("%d",&n);
    int n1=n;
    for(i=1;i<=n*2;i=i+2){
        for(sp=n1;sp>0;sp--)
            printf("  ");
            for(j=1;j<=i;++j)
        {
            if(i==1 || i==(n*2)-1 || j==1 || j==i)
            printf("* ");   
            else
            printf("  ");
        }
        printf("\n");
        n1--;
    }
}
