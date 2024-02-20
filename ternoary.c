#include<stdio.h>
//ternarory operator
int main(void){
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);
    
    age >=18? printf("adult\n"): printf("Minor\n");
    return 0 ;
}
