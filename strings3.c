#include<stdio.h>
//function
void printString(char arr[]);

int main(void){
    char name[50];
    printf("enter your name: ");
    scanf("%s",name);
    printf("your name is: %s\n ");
    return 0;

}
void printString(char arr[]){
    for(int i= 0;arr[i] != '\0';i++){
        printf("%c",arr[i]);

    }
    printf("\n");
}