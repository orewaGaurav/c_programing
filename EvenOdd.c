#include<stdio.h>
#include<math.h>
//TO CHECK WEATHER THE NO. IS EVEN OR ODD
int main(void) {
    int x;
   // int y;
    printf("enter the number to check:");
    scanf("%d",&x);
    if(x%2 == 0){
        printf("even\n");}
    else{
        printf("odd\n");}
    return 0;
}