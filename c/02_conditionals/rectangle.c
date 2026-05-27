#include<stdio.h>
int main(){
    int l,b;
    printf("Enter length and breadth of the rectangle: ");
    scanf("%d%d",&l,&b);

    int area,perimeter;
    area = l*b;
    perimeter = 2*(l+b);

    if(area>perimeter){
        printf("Area is greater\n");
    }
    else{
        printf("Perimeter is greater\n");
    }
    return 0;
}