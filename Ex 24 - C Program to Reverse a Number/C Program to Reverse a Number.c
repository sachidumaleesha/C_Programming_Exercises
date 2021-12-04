#include<stdio.h>

int main(void){

    int num,remainder;
    int reverse = 0;

    printf("Enter a number: ");
    scanf("%d",&num);

    do{
        remainder = num%10;
        reverse = reverse*10 + remainder;
        num = num/10;
    }while(num != 0);

    printf("Revese: %d",reverse);




}
