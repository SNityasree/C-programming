#include <stdio.h>
int findElement(int arr[], int sn, int key)
{
	int i;
	for (i = 0; i < sn; i++)
		if (arr[i] == key)
			return i;
	
	return -1;
}
int main()
{
    int sn;
    scanf("%d",&sn);
	int arr[sn];
	printf("Enter the %d element\n",sn);
	for(int i=0;i<sn;i++){
	    printf("Enter the element %d :",i+1);
	    scanf("%d",&arr[i]);
	}
	int key;
	printf("Enter the searching element: ");
	scanf("%d",&key);
	int position = findElement(arr, sn, key);
	if (position == -1)
		printf("Element not found");
	else
		printf("Element Found at Position: %d",
			position + 1);

	return 0;
}
