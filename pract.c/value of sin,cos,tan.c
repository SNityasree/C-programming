/*David is studying trigonometry and wants to calculate the sine, cosine, and tangent values for a given angle in degrees.
Write a program to assist David in this task. The program should take an input angle in degrees, convert it to radians, and then output the sine, cosine, and tangent values for that angle using the sin(), cos(), and tan() standard library functions.
Formula: Radians = angle * (M_PI / 180.0) where M_PI is the constant value of pi defined in the math library.

Input format :
The input consists of an integer N representing the angle in degrees.

Output format :
After converting the input to radians,
The first line prints a double value S, which is the sine value in the format "Sine of N is S".

The second line prints a double value C, which is the cosine value in the format "Cosine of N is C".

The third line prints a double value T, which is the tangent value in the format "Tangent of N is T".
All three values are rounded to two decimal places.
Refer to the sample output for the formatting specifications.

Code constraints :
In the given scenario, the test cases will fall under the following constraints:

0 ≤ N ≤ 360

Sample test cases :
Input 1 :
30
Output 1 :
Sine of 30 is 0.50
Cosine of 30 is 0.87
Tangent of 30 is 0.58
Input 2 :
0
Output 2 :
Sine of 0 is 0.00
Cosine of 0 is 1.00
Tangent of 0 is 0.00
Input 3 :
349
Output 3 :
Sine of 349 is -0.19
Cosine of 349 is 0.98
Tangent of 349 is -0.19
*/


#include<stdio.h>
#include<math.h>
int main(){
    int angle;
    double radians,sine ,cosine,tangent;
    scanf("%d",&angle);
    radians=angle*(M_PI/180.0);
    sine=sin(radians);
    cosine=cos(radians);
    tangent=tan(radians);
    printf("Sine of %d is %.2f\n",angle,sine);
    printf("Cosine of %d is %.2f\n",angle,cosine);
    printf("Tangent of %d is %.2f",angle,tangent);
}
