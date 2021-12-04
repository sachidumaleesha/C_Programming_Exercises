#include<stdio.h>

main(){

    int num1,num2,temp;

    printf("Enter a number: ");
    scanf("%d",&num1);

    printf("Enter a number: ");
    scanf("%d",&num2);

    printf("\nBefore Swapping\n");
    printf("Num 01: %d\n",num1);
    printf("Num 02: %d",num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n\nAfter Swapping\n");
    printf("Num 01: %d\n",num1);
    printf("Num 02: %d",num2);

    getch();
}
