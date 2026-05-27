#include<stdio.h>

int main()
{
    int a,b,r;
    printf("Enter values of a and b ");
    scanf("%d%d",&a,&b);
    r = a%b;
    printf("The remainder of the numbers are %d\n",r);

    return 0;
}