/*Problem Statement
Rohini is given an array of integers, and she needs to find the maximum sum of a contiguous subarray within the given array. A subarray is a contiguous part of the array, and the sum is the total of the elements within that subarray.
Rohini wants to implement a program to solve this problem efficiently.
Example 1
Input:
9
-2 1 -3 4 -1 2 1 -5 4
Output: 
6
Explanation: 
The subarray [4, -1, 2, 1] has a maximum sum of 6.
Example 2
Input: 
5
5 4 -1 7 8
Output: 
23
Explanation: 
The subarray [5, 4, -1, 7, 8] has the maximum sum of 23.
Input format :
The first line consists of an integer N, representing the size of the array.

The second line consists of N space-separated integers, representing the elements of the array.

Output format :
The output displays a single integer, representing the maximum sum of a contiguous subarray.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases will fall under the following constraints:

3 ≤ N ≤ 10

-100 ≤ Each element ≤ 100

Sample test cases :
Input 1 :
5
5 4 -1 7 8
Output 1 :
23
Input 2 :
9
-2 1 -3 4 -1 2 1 -5 4
Output 2 :
6
Input 3 :
3
100 7 -100
Output 3 :
107
Input 4 :
10
-9 8 15 36 17 -98 54 0 18 9
Output 4 :
81
*/

#include <stdio.h>

int main() {
    int length;
    scanf("%d", &length);

    int nums[10];
    for (int i = 0; i < length; i++) {
        scanf("%d", &nums[i]);
    }

    int currentMax = nums[0];
    int max = nums[0];
    for (int i = 1; i < length; i++) {
        currentMax = (nums[i] > currentMax + nums[i]) ? nums[i] : currentMax + nums[i];
        if (currentMax > max) {
            max = currentMax;
        }
    }

    printf("%d\n", max);

    return 0;
}
