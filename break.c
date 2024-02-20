#include<stdio.h>
/*keep taking input from user until
 that is divisible by 7*/
int main(void){
    int n;
    do {
        printf("enter the number: ");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%7 == 0)
            break;
    }
    while(1);
    printf("Thank you\n");
    return 0;
}