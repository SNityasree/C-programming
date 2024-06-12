#include <stdio.h>
void searchElement(int arr[], int size, int element) {
    int found = 0;  
    printf("Element %d found at positions: ", element);
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("%d ", i+1);
            found = 1;
        }
    }
    if (!found) {
        printf("Element not found in the array.");
    }
    printf("\n");
}
int main() {
    int n, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   printf("Enter the element to be searched: ");
    scanf("%d", &element);
    searchElement(arr, n, element);
    return 0;
}
