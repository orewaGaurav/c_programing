#include<stdio.h>
int main(void){
    int adhar[5];
    // printf("enter the adhar no. : ");
    // scanf("%d",adhar);

    //input
    int *ptr = &adhar[0];
    for (int i =0 ;i<5;i++){
        printf("%d index :",i);
        scanf("%d",(ptr+i));
    }
    //return 0;
    //outut
    for(int i = 0;i<5;i++){
        printf("%d index = %d\n",i,*(ptr+ i));
    }
    return 0;
}
