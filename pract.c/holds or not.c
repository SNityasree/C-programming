/*emma is studying logarithmic identities for her math assignment. Write a program to help Emma that checks the identity log(a*b) = log(a) + log(b). 
Prompt the user to input values for 'a' and 'b', then determine whether the identity holds using the log() function and output the message.

Input format :
The input consists of two space-separated double-values a and b.

Output format :
The output prints "Identity holds." if log(a*b) = log(a) + log(b) holds.

Otherwise, the output prints "Identity does not hold."
  */

#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);

    double left_side = log(a * b);
    double right_side = log(a) + log(b);

    if (left_side == right_side) {
        printf("Identity holds.\n");
    } else {
        printf("Identity does not hold.\n");
    }

    return 0;
}
