#include<stdio.h>
//function
void printString(char arr[]);

int main(void){
    char firstName[] = "Gaurav";
    char lastName[] = "Mehta";

    printString(firstName);
    printString(lastName);
    return 0;

}
void printString(char arr[]){
    for(int i= 0;arr[i] != '\0';i++){
        printf("%c",arr[i]);

    }
    printf("\n");
}