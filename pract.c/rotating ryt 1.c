/*Ravneet Kaur is currently developing a program focused on rotating the elements of an array to the right.



Seeking assistance, she requests a program that is designed to shift array elements to the right by one position, wrapping around with the last element moved to the first.

Input format :
The first line of input consists of an integer N representing the size of the array.

The second line of input consists of N space-separated integers arr[i], representing the array elements.

Output format :
The output displays the array of elements after rotating it to the right by one position, separated by a space.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ N ≤ 10

1 ≤ arr[i] ≤ 100

Sample test cases :
Input 1 :
5
1 2 3 4 5
Output 1 :
5 1 2 3 4 */


#include<stdio.h>
void rotatearray(int arr[],int n){
    int last = arr[n-1];
    for(int i= n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    rotatearray(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


