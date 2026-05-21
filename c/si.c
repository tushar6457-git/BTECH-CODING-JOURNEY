#include<stdio.h>
int main(){
    float principal,rate,time,si;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time: ");
    scanf("%f", &time);

    si = (principal*rate*time)/100;
    printf("Your Simple Interest: %f\n", si);

    return 0;

}