/*QUESTION:
Dr. Dexter is a Robotics Research Scientist. He is now on the urge of building his own humanoid robot - Xinyou. 

Xinyou has an in-built color sensor. The sensor senses the environment and gives the color that is highly present in the spectrum. Now, Dr. Dexter wants Xinyou to output whether it is dawn or dusk based on the sensor's output. The sensor outputs 'BLUE' or 'RED'. If color blue is scattered more it is Dawn and if red is scattered more it is Dusk. 

Any input other than 'BLUE' and 'RED' is assumed to be an invalid input. 

Write a C program that finds out whether it is Dawn or Dusk.


INPUT & OUTPUT FORMAT:

Input is a string.
Output is a string, either "It is Dawn", "It is Dusk", or "Invalid Input".
Refer to the sample input & output for formatting specifications.
 
SAMPLE INPUT & OUTPUT 1:
BLUE
It is Dawn  */

#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    if(strcmp(a,"RED")==0){
        printf("It is Dusk");
    }else if(strcmp(a,"BLUE")==0){
        printf("It is Dawn");
    }
        else{
        printf("Invalid Input");
    }
}
