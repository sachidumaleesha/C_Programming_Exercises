#include <stdio.h>
int main(void){

    int num,num1,remainder;
    int reverse = 0;

    printf("Enter a number: ");
    scanf("%d",&num);

    num1 = num;

    do{
        remainder = num%10;
        reverse = reverse*10 + remainder;
        num = num/10;
    }while(num != 0);

    printf("Reverse Number: %d\n",reverse);

    if(num1 == reverse){
        printf("Number is Palindrome");
    }
    else{
        printf("Number is not Palindrome");
    }




    getch();
    return 0;
}
