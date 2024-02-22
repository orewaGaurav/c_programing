#include<stdio.h>
int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u\n %u\n Difference = %u\n",ptr,_ptr,ptr-_ptr);
    _ptr = &age;
    printf("camparision= %u\n",ptr == _ptr);//1 int == 4bytes
}