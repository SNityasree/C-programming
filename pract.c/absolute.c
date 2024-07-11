/*Mukilan is on a mathematical adventure and wants to explore the absolute values of different numbers. He's seeking a tool to quickly determine the absolute value of any given integer using the abs() function from the math library.
Can you help him by creating a program?

Input format :
The input is an integer n, representing the number to be calculated.

Output format :
The output displays"The absolute value of X is Y" where X is the input integer and Y is the absolute value of the input integer n.



Refer to the sample output for the formatting specifications.

Code constraints :
In the given scenario, the test cases will fall under the following constraints:
*/

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("The absolute value of %d is %d",n,abs(n));
}
