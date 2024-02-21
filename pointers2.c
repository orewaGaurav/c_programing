#include<stdio.h>
int main(void){
    int age =22;
    int *ptr = &age;
    
    //address
    //("%p") == hexadecimal value
    //("%u") == decimal value
    printf("%p\n",&age);//prints the address of age in hexadecimal
    printf("%u\n",&age);//prints in decimal
    printf("%p\n",ptr);
    printf("%u\n",ptr);//prints the address of age as ptr stores addres of age
    printf("%u\n",&ptr);//prints the address of ptr

    //format specifier
    printf("%d\n",age);
    printf("%d\n",*ptr);//prints the value of ptr
    printf("%d\n",*(&age));//prints value of address of age
    return 0;
}
