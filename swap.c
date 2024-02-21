#include<stdio.h>
//call by reference

//void swap(int a,int b);
void _swap(int *a, int *b);

int main(void){
    int x = 3;
    // printf("enter x = ");
    // scanf("%p",&x);
    int y = 5;
    // printf("enter y = ");
    // scanf("%p",y);
    _swap(&x , &y);
    printf("x = %d & y = %d\n",x,y);
    return 0;
}
//call by reference
void _swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
} 