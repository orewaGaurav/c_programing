#include <stdio.h>
#include <string.h>
#include <math.h>

struct product{
    char name[100];
    float price;
    int gst;

};

int main(void){
    struct product p1;
    p1.price = 450.56;
    p1.gst = 18;
    strcpy(p1.name,"study tabel");

    printf("name of the product: %s\n",p1.name);
    printf("price of the product: %f\n",p1.price);
    printf("gst on the product: %d\n",p1.gst);

    struct product p2;
    p2.price = 6000;
    p2.gst = 25;
    strcpy(p2.name,"Rolex watch");
    printf("name of the product: %s\n",p2.name);
    printf("price of the product: %f\n",p2.price);
    printf("gst on the product: %d\n",p2.gst);

}