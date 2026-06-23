#include<stdio.h>
int main(){
    int n;
    printf("Enter the row number: ");
    scanf("%d",&n);
    /*
    1
    A B
    1 2 3
    A B C D
    1 2 3 4 5
    ............
    */
   for(int i=1;i<=n;i++){
    if(i % 2 != 0) {  // odd row → numbers
            for(int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } 
        else {  // even row → alphabets
            for(int j = 1; j <= i; j++) {
                printf("%c ", 'A' + j - 1);
            }
        }
        printf("\n");
    }
    return 0;
}