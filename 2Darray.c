#include<stdio.h>
int main(void){
    int marks[2][3];//_ _ _ | _ _ _ 
    marks[0][0]= 91;
    marks[0][1]= 92;
    marks[1][0]= 93;
    marks[1][1]= 94;
    marks[0][2]= 95;
    marks[1][2]= 96;

    printf("%d\n\n%d\n",marks[0][0],marks[0][1]);
    printf("%d\n",marks[1][1]);
    return 0;
    }