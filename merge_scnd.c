#include<stdio.h>
void main(){

int a1[5], a2[5], a3[10], i, temp;
printf("Elements of array 1 : ");
for(i=0;i<5;i++){
 scanf("%d",&a1[i]);
}

printf("Elements of array 2 : ");
for(i=0;i<5;i++){
 scanf("%d",&a2[i]);
}

for(i=0;i<10;i++){
 if(i<5){
  a3[i] = a1[i];
 }

 else{
  a3[i] = a2[i-5];
 }
}

printf("Elements after merging : ");
for(i=0;i<10;i++){
 printf("%d\n",a3[i]);
}

}

