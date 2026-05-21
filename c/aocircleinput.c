#include<stdio.h>
int main(){
    float r;
    printf("Enter Radius: ");
    scanf("%f", &r);
    float pi = 3.1415;
    float area = pi * r * r;
    printf("The area of the Circle is %f\n", area);

    return 0;
}