#include <stdio.h>
int main(void){
    int marks[3];
    printf("enter the marks of Physics: ");
    scanf("%d",&marks[0]);

    printf("enter the marks of chemistry: ");
    scanf("%d",&marks[1]);

    printf("enter the marks of maths: ");
    scanf("%d",&marks[2]);

    printf("physics= %d,chemistry = %d,maths = %d",marks[0],marks[1],marks[2]);
    return 0;
}