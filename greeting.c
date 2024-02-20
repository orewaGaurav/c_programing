#include<stdio.h>
/*TO PRINT Namaste if the user is Indian &
 if the user is French*/
void namaste(void);
void bonjour(void);

int main(void){
    printf("Enter f for French and i for Indian: ");
    char ch;
    scanf("%c",&ch);
    if(ch == 'i'){
        //printf("Namaste");}
        namaste();}
    else if(ch == 'f'){
        //printf("Bonjour");
        bonjour();
    }
    else {
        printf("plz enter i or f only!\n");
    }
    return 0;
}
void namaste(void){
    printf("Namaste\n");
}
void bonjour(void){
    printf("Bonjour\n");
}