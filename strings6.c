#include<stdio.h>
#include<string.h>
int main(void){
    // //1st method
    // char len[] = "Gaurav";
    // int length = strlen(len);
    // printf("%d\n",length);


    //2nd way

    // char len[] = "Gaurav";
    // //special type of declaration that is "%lu"
    // printf("%lu\n",strlen(len));


    //3rd way
    //by taking input from the user

    char len[100];
    fgets(len,100,stdin);
    int length = strlen(len);
    int finallength = length - 1;
    printf("%d\n",finallength);
    return 0;




}