/*
QUESTION:

Xinyou has been trained to drive now. Dr. Dexter wants to get to a National Conference to present Xinyou. The venue of the conference is x kms away from his workshop. He wants to know if Xinyou will be able to make it to the conference on time if he travels at y kms/h.
Write a C program module that checks if he will be able to make it to the conference on time.

 
INPUT & OUTPUT FORMAT: 

Input consists of 4 lines.
The first line of input is a floating point number corresponding to the distance 'd'. 0 < d < 32767.
The second line of input is a floating point number corresponding to the speed 's'. 0 < s < 32767.
The third line of input is a string corresponding to the time at which the conference begins – 'ti'. 
The fourth line of input is a string corresponding to the current time, 'tj'.
'ti' and 'tj'  are strictly in the 'hh:mm' format (tj<ti).
Output consists of a single string 'Yes', 'No' or 'Invalid Input'.
SAMPLE INPUT & OUTPUT 1:
100
25
16:00
10:00
Yes
  */

#include<stdio.h>
int main(){
    int d,s,h,m,h1,m1,t,tot;
    scanf("%d %d %d:%d %d:%d",&d,&s,&h,&m,&h1,&m1);
     int ti=h+m;
    int tj=h1+m1;
    if(ti>tj){
        t=(d/s);
        tot=t+tj;
        if(tot<ti){
            printf("Yes");
        }else if(ti<tot){
            printf("No");
        }
    }
    else {
        printf("Invalid Input");
    }
    
}
