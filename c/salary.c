#include<stdio.h>
int main(){

    int cp,sp;
    printf("Enter Cost Price of the product:");
    scanf("%d",&cp);

    printf("Enter Selling Price of the Product:");
    scanf("%d",&sp);

    if(sp>cp){
        printf("Its Profit!!!\n");
    }
    if(cp>sp){
        printf("Its Loss:)\n");
    }
    if(cp==sp){
        printf("Its Same...\n");
    }
    return 0;
}