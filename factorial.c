#include<stdio.h>
//factorial using recursion
int factorial(int n);

int main(void){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("factorial is: %d\n",factorial(n));
    
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    int factorialNm1 = factorial(n-1);
    int factorialN = factorialNm1 * n;
    return factorialN;
    
}