#include<stdio.h>

int main(){

    float x,z;
    printf("Enter a number to get its fractional part: ");
    scanf("%f",&x);
    int y = x;
    z = x-y;
    printf("The fractional part of the given number is: %f\n",z);
    return 0;
}