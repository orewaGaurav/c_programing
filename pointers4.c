#include<stdio.h>
void square(int n);
void _square(int* n);

int main(void){
    int number;
    printf("enter the n: ");
    scanf("%d",&number);
    square(number);
    printf("number = %d\n",number);

    _square(&number);
    printf("number = %d\n",number);
    return 0;

}
void square(int n){
    n = n * n;
    printf("square = %d\n",n);

}
void _square(int* n){
    *n = *n * (*n);
    printf("square = %d\n",*n);
}
