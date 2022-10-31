#include <stdio.h>
void main(){
	int i, j, temp, n, arr[30];
	printf("Enter the no. of elements:");
	scanf("%d", &n);
	printf("Enter the array elements: \n");
	for (i = 0; i < n; ++i)
	scanf("%d", &arr[i]);
        for (i = 0; i < n; ++i) 
	{
            for (j = i + 1; j < n; ++j)
            {
                if (arr[i] > arr[j]) 
                {
                    temp =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", arr[i]);
}
