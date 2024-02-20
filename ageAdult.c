#include<stdio.h>
//to check adult or not
int main(void){
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age>=18){
        printf("ADULT\n");}
   // else(printf("MINOR\n"));
    else{
    printf("MINOR\n");
    return 0;
    }
    }