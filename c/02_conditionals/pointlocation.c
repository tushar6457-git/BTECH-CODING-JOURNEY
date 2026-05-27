#include<stdio.h>
int main(){
    int x,y;
    printf("ENter the coordinates: ");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0){
        printf("Lies on origin\n");
    }
    else if(y==0){
        printf("Lies pn x-axis\n");
    }
    else if(x==0){
        printf("Lies pn y-axis\n");
    }
    else{
        printf("Doesn't lie on x or y axis...\n");
    }
    return 0;
}