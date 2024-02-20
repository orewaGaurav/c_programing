#include<stdio.h>
//calculator using function
int sum(int a,int b);
int main(void){
    int a,b;
    
    printf("enter first no_ : ");
    scanf("%d",&a);
    
    printf("enter second no_ : ");
    scanf("%d",&b);
    
    int s =sum(a,b);
    printf("sum is: %d\n",s);
    return 0;
}

int sum(int x, int y){
    return x + y;
}
