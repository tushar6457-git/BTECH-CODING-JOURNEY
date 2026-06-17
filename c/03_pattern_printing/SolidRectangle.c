#include<stdio.h>
int main(){
    int m,c;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    for(int i=1;i<=c;i++){
         for(int i=1;i<=m;i++){
        printf("*");
      }
    
    printf("\n");
    }
    return 0;
}