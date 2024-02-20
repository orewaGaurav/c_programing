#include<stdio.h>
//switch operator
int main(void){
    char day;
    printf("enter the day: ");
    scanf("%s",&day);
    
    switch (day){
        case 'm' : printf("Monday\n");
            break;
        case 't' : printf("Tuesday\n");
            break;
        case 'w' :printf("Wednesday\n");
            break;
        case 'T' : printf("Thrusday\n");
            break;
        case 'f' : printf("Friday\n");
            break;
        case 's' : printf("Satuarday\n");
            break;
        case 'S' : printf("Sunday\n");
            break;
        default : printf("Enter between 1 - 7\n");
            
                }
    return 0;
}
