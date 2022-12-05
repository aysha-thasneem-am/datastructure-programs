#include<stdio.h>
void main(){
	int u[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},a[20],p[20],i,j,n;
	printf("enter size of the array:\n");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
		}
	for (i=0; i<15; i++)
		p[i] = 0;
	for(i=0;i<n;i++){
		for(j=0;j<15;j++){
			if(a[i]==u[j]){
				p[j]=1;
				break;
		}
		}
	}
printf("bitstring is:\n");
for(i=0;i<15;i++){
	printf("%d",p[i]);
}
}
