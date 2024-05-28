#include<stdio.h>
#include<string.h>
int main(){
    char st[100];
    scanf("%s",&st);
    int n=strlen(st);
    for(int i=0,j=n-1;i<=j;i++,j--){
        char c=st[i];
        st[i]=st[j];
        st[j]=c;
        
    }
    printf("%s",st);
}
