#include<stdio.h>
//return the length of input
int countName(char arr[]);
int main(void){
    char name[100];
    fgets(name,100,stdin);
    printf("length is:%d ",countName(name));
    return 0;
    
}
int countName(char arr[]){
    int count = 0;
    for(int i = 0;arr[i]!='\0';i++){
        count++;
    }

    //count = count + 1;
    return count - 1;
}

