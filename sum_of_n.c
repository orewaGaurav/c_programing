#include<stdio.h>
//to print sum of first n numbers
int main(void){
    int n;
    int sum=0;
    printf("Enter the no: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum = sum +i;
       // printf("sum of n numbers: %d\n",sum);
    }
    printf("sum of the n numbers: %d\n",sum);
    return 0;
}