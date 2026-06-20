#include<stdio.h>
int main(){
    int n;
    printf("Enter max number: ");
    scanf("%d" ,&n);
    for(int i=1;i<=n;i++){ //rows
        for(int j=1;j<=i;j++){  //columns
            printf("%d ",j);
    }
    printf("\n");
    }
    return 0;
}