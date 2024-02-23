#include<stdio.h>
int main(void){
    //unsafe
    // char str[100];
    // gets(str);
    // puts(str);


    //complex
    // char sen[100];
    // scanf("%[^\n]%*c",sen);
    // printf("%s",sen);

    char sen[100];
    fgets(sen,100,stdin);
    puts(sen);

}