/*
QUESTION:

Dr. Dexter's car's seat belt detectors have been corrupted. So he wants you to build a module which checks if all the seat belts are worn. If and only if all the seat belts are worn Xinyou must start driving.
Write a C program module that checks if all the seat belts have been worn.

 
INPUT FORMAT:

Input consists of n+1 lines.
The first line of input is an integer n ( 0 < n < 32767), which corresponds to the number of seats.
The next n lines consist of strings 'yes' or 'no' corresponding to whether the seat belts have been worn or not.
OUTPUT FORMAT:
Output consists of a single string 'Yes I can drive' or 'No I can't drive' or 'Invalid Input'
Refer to the sample input and output for formatting specifications. 
Assume that all inputs consist of lowercase characters only.
[All text in bold corresponds to input and the rest to output.]
SAMPLE INPUT & OUTPUT 1:
2
no
no
No I can't drive
*/

#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char a[50];
    for(int i=0;i<n;i++){
        scanf("%s",a);
    }
        if(strcmp(a,"NO")==0 || strcmp(a,"Yes")==0){
            printf("Invalid Input");
        }
        else if((strcmp(a,"no")==0)){
            printf("No I can't drive");
        }
        else {
            printf("Yes I can drive");
        }
}
