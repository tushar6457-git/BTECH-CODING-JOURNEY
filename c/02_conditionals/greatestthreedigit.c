#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter 3 distinct positive integers :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>0 && b>0 && c>0 && a!=0 && b!=0 && c!=0 && a!=b && b!=c && c!=a){
        if(a>b && a>c){
            printf("%d is greatest.\n",a);
        }
        if(b>a && b>c){
            printf("%d is greatest.\n",b);
        }
        if(c>a && c>b){
            printf("%d is greatest.\n",c);
        }
    }
    else{
        printf("The numbers doesn't satisfy the given condition!!!\n");
    }
    return 0;
}