#include<stdio.h>
// table of any no. in a reverse order
int main(void){
    int n;
    //int table = 1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){
        printf("%d\n",n*i);
        
    }

    return 0;
}