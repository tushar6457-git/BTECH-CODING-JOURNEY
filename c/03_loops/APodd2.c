#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    // for(int i=4;i<=3*n+1;i=i+3){
    //     printf("%d  ",i);
    // }
    // 4  7  10  13  16  19  22  25  28  31 ..... upto n numnbers of terms
    // Gonna use new variable
    int a = 4;
    for(int i=1;i<=n;i++){
        printf("%d  ",a);
        a = a + 3;
    }
    return 0;
}