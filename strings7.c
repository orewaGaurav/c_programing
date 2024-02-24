#include<stdio.h>
#include<string.h>
int main(void){

    //concatenation
    char first[100]= "Hello ";//size of 1st one should be greater than second one
    char second[]= "orewa";
    strcat(first,second);
    printf("%s\n",first);


    //replacement
    char value1[] = "Gaurav";
    char value2[] = "Zoro";
    strcpy(value1,value2);
    printf("%s\n",value1);


    //camparision
    char firstvalue[]="Apple";//if output is 0 then ASCII value of firststr = secondstr
    char secondvalue[]="Banana";//if output is -ve means first value <second value
    printf("%d\n",strcmp(firstvalue,secondvalue));//if output is +ve then first value > second value
    printf("%d\n",strcmp(secondvalue,firstvalue));

    char firstvalu[]="GGGA";//if output is 0 then ASCII value of firststr = secondstr
    char secondvalu[]="GGGB";//if output is -ve means first value <second value
    printf("%d\n",strcmp(firstvalu,secondvalu));//if output is +ve then first value > second value
    printf("%d\n",strcmp(secondvalu,firstvalu));


    char firstval[]="AAA";//if output is 0 then ASCII value of firststr = secondstr
    char secondval[]="AAA";//if output is -ve means first value <second value
    printf("%d\n",strcmp(firstval,secondval));//if output is +ve then first value > second value
    printf("%d\n",strcmp(secondval,firstval));


}