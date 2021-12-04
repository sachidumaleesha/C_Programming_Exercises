#include <stdio.h>

int main(void){

    int num1,num2;
    char opp;

    printf("Enter the operation: ");
    scanf("%c",&opp);

    printf("Enter your 1st number: ");
    scanf("%d",&num1);

    printf("Enter your 2nd number: ");
    scanf("%d",&num2);

    switch(opp){
        case '+':
            printf("Sum: %d",num1+num2);
            break;
        case '-':
            printf("Sub: %d",num1-num2);
            break;
        case '*':
            printf("Mul: %d",num1*num2);
            break;
        case '/':
            printf("Dev: %d",num1/num2);
            break;
        default:
            printf("Invalid Opp");


    }


    getch();
    return 0;

}
