#include<stdio.h>
//to check the given character uppercase or lowercase
int main(void){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    
    if (ch >= 'A' && ch<='Z'){
        printf("Uppercase");}
    else if (ch >= 'a' && ch<='z'){
        printf("Lowercase");
        }
    else{
        printf("Not english");}
    return 0;
}