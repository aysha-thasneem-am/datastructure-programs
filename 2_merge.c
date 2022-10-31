#include<stdio.h>
int main()
{
    int arr1[50], arr2[50], m, n, i, k, merge[100];
    printf("Enter size of 1st array ");
    scanf("%d", &m);
    printf("Enter elements of 1st array: ");
    for(i=0; i<m; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    k = i;
    printf("\nEnter Size of 2nd array: ");
    scanf("%d", &n);
    printf("Enter Elements of 2nd array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++) {
        printf("%d ", merge[i]);
	}
    return 0;
}
