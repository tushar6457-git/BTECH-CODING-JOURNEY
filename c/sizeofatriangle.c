#include<stdio.h>
int main(){
     int a,b,c;
    printf("Enter sides of the triangle :");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("Valid Triangle\n");
    }
    else{
        printf("Invalid triangle...\n");
    }
    return 0;
}