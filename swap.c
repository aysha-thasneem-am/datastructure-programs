#include<stdio.h>
void main(){
	int i,n,k,a[10],b[10],temp[10];
	printf("enter size of the first array\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("first array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\nenter size of the second array\n");
	scanf("%d",&k);
	printf("enter array elements\n");
	for(i=0;i<k;i++){
		scanf("%d",&b[i]);
	}
	printf("second array:\n");
	for(i=0;i<k;i++){
		printf("%d\t",b[i]);
	}
	for(i=0;i<k;i++){
		temp[i]=a[i];
		a[i]=b[i];
		b[i]=temp[i];
	}
	printf("\nafter swap\n");
	printf("first array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\nsecond array:\n");
	for(i=0;i<k;i++){
		printf("%d\t",b[i]);
	}
}
