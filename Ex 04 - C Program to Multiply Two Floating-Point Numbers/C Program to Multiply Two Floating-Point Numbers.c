#include <stdio.h>

main(){

    float num1,num2,multiply;

    printf("Multiply Floating Numbers\n\n");

    printf("Enter your 1st number: ");
    scanf("%f",&num1);

    printf("Enter your 2nd number: ");
    scanf("%f",&num2);

    multiply = num1 * num2;

    printf("Multiply = %.2f",multiply);



    getch();
    return 0;
}
