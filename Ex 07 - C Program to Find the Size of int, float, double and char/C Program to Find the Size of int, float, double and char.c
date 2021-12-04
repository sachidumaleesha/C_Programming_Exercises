#include <stdio.h>

int main (void){

    int a;
    float b;
    double c;
    char d;

    /*
    printf("Enter a character: ");
    scanf("%c",&d);

    printf("Enter an integer number: ");
    scanf("%d",&a);

    printf("Enter a float number: ");
    scanf("%f",&b);

    printf("Enter a big float number: ");
    scanf("%lf",&c);

    printf("\n");
    */

    printf("Size of integer is %zu bytes\n",sizeof(a));
    printf("Size of float is %zu bytes\n",sizeof(b));
    printf("Size of double is %zu bytes\n",sizeof(c));
    printf("Size of char is %zu bytes",sizeof(d));

    getch();
    return 0;
}
