/*Sandeep is organizing a neighbourhood bicycle race and he wants to rearrange the starting positions of the participants.
Write a program that takes an array of participant numbers and an integer M and rotates the array to the right by M positions to determine the new starting order for the race.

Input format :
The first line of input consists of an integer N, representing the number of participants.

The second line consists of N space-separated integers, representing the participant numbers.

The third line consists of an integer M, representing the number of positions to be rotated.

Output format :
The output prints the rotated array with M positions to the right, separated by a space.
Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 10

1 ≤ elements ≤ 100

1 ≤ M < N

Sample test cases :
Input 1 :
5
47 56 95 24 38
3
Output 1 :
95 24 38 47 56 
Input 2 :
8
1 2 3 4 5 6 7 8
6
Output 2 :
3 4 5 6 7 8 1 2 
*/

// You are using GCC
#include<stdio.h>
void rotateright(int arr[],int n,int m){
    int rotatedarr[n];
    m=m%n;
    for(int i=0;i<m;i++){
        rotatedarr[i]=arr[n-m+i];
    }
    for(int i=m;i<n;i++){
        rotatedarr[i]=arr[i-m];
    }
    for(int i=0;i<n;i++){
        arr[i]=rotatedarr[i];
    }
}
int main(){
    int n,m;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    rotateright(arr,n,m);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
