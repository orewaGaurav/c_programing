#include<stdio.h>
//table of any number
int main(void){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(int i= 1;i<=10;i++){
        printf("%d\n",n*i);
    }
    return 0;
}
