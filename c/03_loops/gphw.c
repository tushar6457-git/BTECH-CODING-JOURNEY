#include<stdio.h>
int main(){
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   float g = 100;
   for(int i=1;i<=n;i++){
      printf("%f ",g);
      g = g/2;
   }
   return 0;
 }