#include<stdio.h>
void main(){
int i, k, a[5], b[5], c[10];
printf("Enter  array 1 : ");
for(i=0;i<5;i++){
 scanf("%d",&a[i]);
}

printf("Enter  array 2 : ");
for(i=0;i<5;i++){
 scanf("%d",&b[i]);
}

for(i=0;i<10;i++){
 if(i == 0){
  c[i] = a[i];
}
else{
  if(i%2 == 0){
   c[i] = a[i-1];
  }
}
}

for(i=0,k=0;i<10;i++,k+=2){

   c[k] = a[i];

}

for(i=0,k=1;i<10;i++,k+=2){

   c[k] = b[i];

}

printf("Elements in 3rd array : ");
for(i=0;i<10;i++){
 printf("%d\n",c[i]);
} 
}






