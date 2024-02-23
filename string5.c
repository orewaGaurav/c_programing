#include<stdio.h>
int main(){
    //pointer se string define karenge to use change v akr sakte hai 
    char *canChange = "hello world";
    puts(canChange);
    canChange = "hello";
    puts(canChange);

    //array se string define karoge to change nai hoga
    char canNotchange[]= "hello world";
    puts(canNotchange);

    //canNotchange ="hello";

    return 0;

}