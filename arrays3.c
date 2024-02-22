#include <stdio.h>
int main(void){
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n",ptr);
    ptr++;//increment operator
    printf("ptr = %u\n",ptr);//in int & float int++ will add 4 as size of one int and one float is 4 byte
    ptr--;//in case of character ch++ will add 1 as size of character is 1
    printf("ptr = %u\n",ptr);//decrement opreator
    return 0;

}