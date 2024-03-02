#include<stdio.h>
int main(void){
    int n;
    int factorial = 1;
    printf("Enter the no: ");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++){
        factorial *= i;
    }
    printf("%d\n",factorial);
}