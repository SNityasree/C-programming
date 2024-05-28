#include<stdio.h>
int main(){
    long int binaryval,hexadecimal=0,i=1,remainder;
    printf("enter the binary value: ");
    scanf("%ld",&binaryval);
    while(binaryval!=0){
        remainder=binaryval%10;
        hexadecimal=hexadecimal+remainder*i;
        i=i*2;
        binaryval=binaryval/10;
    }
    printf("hexadecimal value is %lX",hexadecimal);
}
