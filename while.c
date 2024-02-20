#include<stdio.h>
//iteration using while
int main(void){
    int n;
    int i =0;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}