#include <stdio.h>

void find_subarray(int arr[], int n, int target) {
    int start = 0, current_sum = 0;

  for (int end = 0; end < n; end++) {
           current_sum += arr[end];

            while (current_sum > target && start <= end) {
            current_sum -= arr[start];
            start++;
        }
   if (current_sum == target) {
            printf("[%d, %d]\n", start + 1, end + 1);  // 1-based indexing
            return;
        }
    }
   printf("No subarray found with the given sum\n");
}

int main() {
    int n, target;
   printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare the array of size 'n'
   printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   printf("Enter the target sum: ");
    scanf("%d", &target);
    find_subarray(arr, n, target);

    return 0;
}
