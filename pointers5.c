#include<stdio.h>

/*write a function to calculate sum ,product, avg of 2 numbers.
print that average in main function*/

void calculate(int a , int b,int *sum ,int *product,int *average);

int main(void){
    int a;
    printf("enter number 1: ");
    scanf("%d",&a);
    int b;
    printf("enter number 2: ");
    scanf("%d",&b);

    int sum , product,average;
    calculate(a,b,&sum,&product,&average);

    printf(" sum = %d\n product = %d\n average = %d\n",sum,product,average);
    return 0;

}

void calculate(int a ,int b,int *sum,int *product, int *average){
    *sum =  a + b;
    *product = a * b;
    *average = (a+b)/2;
}