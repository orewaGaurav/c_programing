#include<stdio.h>
/*write a program to calculate area of
 square,rectangle ,circle*/
float square(float side);
float circle(float radius);
float rectangle(float length,float breadth);

int main(void){
    float length;
    float breadth;
    printf("enter the value of length: ");
    scanf("%f",&length);
    printf("enter the value of breadth: ");
    scanf("%f",&breadth);
    printf("area of rectangle is: %f\n",rectangle(length,breadth));
    
    float side;
    printf("enter the side of sqr: ");
    scanf("%f",&side);
    printf("area of square is: %f\n",square(side));
    
    float radius;
    printf("enter the radius: ");
    scanf("%f",&radius);
    printf("area of circle is: %f\n",circle(radius));
    return 0;
}

float square(float side){
    return side*side;
}
float circle(float radius){
    return 3.14*radius*radius;
}
float rectangle(float length,float breadth){
    return length*breadth;
}
