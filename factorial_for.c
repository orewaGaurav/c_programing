#include<stdio.h>
//Factorial of any number
int main(void){
    int n;
    int factorial = 1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        factorial = factorial * i;
       // printf("%d\n",factorial);
    }
    printf("%d\n",factorial);
    return 0;
}
