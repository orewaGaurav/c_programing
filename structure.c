#include<stdio.h>

#include<string.h>

//user defined
struct student{
    int roll;
    float marks;
    char name[100];
};

int main(void){
    struct student s1;
    s1.roll = 014;
    s1.marks = 88.22;
    //s1.name = "gaurav";
    strcpy(s1.name ,"Gaurav");

    printf("Name of the student:%s\n",s1.name);
    printf("roll of the student: %d\n",s1.roll);
    printf("marks of the student:%f\n",s1.marks);
}