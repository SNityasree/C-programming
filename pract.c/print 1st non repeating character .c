#include<stdio.h>
#include<string.h>
int func(char str[]){
    int freq[255]={0};
    for(int i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    for(int i=0;i<255;i++)
        if(freq[(unsigned char)str[i]]==1){
          return str[i];
        }
    return 0;
}
int main(){
    char str[100];
    scanf("%s",&str);
    char result=func(str);
    if(result=='0'){
        printf("0");
    }else{
        printf("%c",result);
    }
    return 0;
}
