/*Problem Statement
Write a program to check whether the given number is a perfect number or not. If it is a perfect number, find the square of the number and print it as output. If it is not a perfect number, find the sum of the digits and print it as output.
A perfect number is a positive integer that is equal to the sum of its proper positive divisors excluding the number itself.
Input format :
The input consists of an integer N, representing the number to be checked.
Output format :
If N is a perfect number, the output should print the square of the number.
Otherwise, it should print the sum of the digits.
Refer to the sample output for formatting specifications.
Code constraints :
2 ≤ N ≤ 1500

Sample test cases :
Input 1 :
6
Output 1 :
36
Input 2 :
72
Output 2 :
9 */

#include <stdio.h>
int main() {
    int number, sum = 0;
    scanf("%d", &number);
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    if (sum == number) {
        int square = number * number;
        printf("%d", square);
    } else {
        int digitSum = 0;
        int temp = number;
        while (temp != 0) {
            digitSum += temp % 10;
            temp /= 10;
        }
        printf("%d", digitSum);
    }

    return 0;
}
