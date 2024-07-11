/*Eva is at (3, 4) on a 2D grid, and Angel is at an unknown point (x, y). They want to find the Euclidean distance between them. Write a program taking Angel's coordinates as input and using built-in mathematical functions to output the distance.
Formula: distance = sqrt((x - 3)2 + (y-4)2) 
Note: The program should utilize built-in mathematical functions, pow and sqrt, for accurate calculation of the Euclidean distance.
Input format :
The input consists of two space-separated integers, x and y, representing the coordinates of Angel's location.

Output format :
The output displays a single integer representing the Euclidean distance between Eva and Angel.*/


  #include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int a=3;
    int b=4;
    int c=(x-a);
    int d=(y-b);
    int e=pow(c,2);
    int f=pow(d,2);
     int g=sqrt(e+f);
     printf("%d",g);
}
