#include<stdio.h>
void main()
{ 
  int a1[3],a2[3],temp,i;
  printf("Enter elements to 1st array : ");
  for(i=0;i<3;i++){
   scanf("%d",&a1[i]);
  }  

  printf("Enter elements to 2nd array : ");
  for(i=0;i<3;i++){
   scanf("%d",&a2[i]);
  }

  for(i=0;i<3;i++){
   temp = a2[i];
   a2[i] = a1[i];
   a1[i] = temp;
   
  }

  printf("elements to 1st array after swapping : ");
  for(i=0;i<3;i++){
   printf("%d\n",a1[i]);
  }  

  printf("elements to 2nd array after swapping : ");
  for(i=0;i<3;i++){
   printf("%d\n",a2[i]);
  }
}
