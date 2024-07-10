/*Miranda, a curious computer science student, is fascinated by patterns. She wants to create a program that generates a pyramid pattern of characters starting from 'A' based on user input. 
Write a program that takes the height of the pyramid from Miranda and prints rows of characters where each row consists of repeated characters in ascending order using the recursive function called printPyramid.

Input format :
The input consists of an integer n, representing the height of the pyramid.

Output format :
The output prints print n rows of characters, each row containing the same character in ascending order.
*/
#include<stdio.h>
int printPyramid(int n,int a){
    for(int i=n;i>=1;--i){
        for(int j=1;j<=i;j++){
        printf("%c",a);
    }
    printf("\n");
    a++;
}
}
int main(){
    int n;
    scanf("%d",&n);
    printPyramid(n,65);
}
