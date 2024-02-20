#include<stdio.h>
int main(void){
    int marks;
    printf("Enter the marks of the student:");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("Grade is A++\n");
    }
    else if (marks>=80 && marks<90){
        printf("Grade is A+\n");
    }
    else if(marks>=70 && marks<80){
        printf("Grade is A\n");
    }
    else if(marks>40 && marks<70){
        printf("Pass\n");
    }
    else if (marks<40 && marks>=0){
        printf("Fail\n");
    }
    else {
        printf("Enter a valid marks\n");
    }
    return 0;
}
