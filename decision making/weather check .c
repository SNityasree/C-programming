/*
QUESTION:
Xinyou has an in-built GPS system that gives its current position coordinates as input. Using these coordinates Xinyou gets the current weather information. Initially, Dr. Dexter wants Xinyou to drive only when it is sunny. The different weather conditions are 'sunny', 'rainy', and 'foggy'.

Given the weather condition, write a program to check whether Xinyou can drive or not.
 
INPUT FORMAT:

Input consists of a string, corresponding to the weather condition.

OUTPUT FORMAT:

Output is a string "Yes I can drive smile" or "Sorry invalid input :|" or "No I cant drive sad".
Refer to the sample input and output for formatting specifications. 
SAMPLE INPUT & OUTPUT 1:
sunny
Yes I can drive :)
SAMPLE INPUT & OUTPUT 2:
misty
Sorry invalid input :| 
*/

#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    scanf("%s",a);
    if(strcmp(a,"sunny")==0){
     printf("Yes I can drive :)");
    }
     else if(strcmp(a,"rainy")==0){
         printf("No I cant drive :(");
     }else {
         printf("Sorry invalid input :|");
     }
    }
