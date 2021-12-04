#include <stdio.h>
#include <math.h>
int main(void){

    int num,num1,num2;
    int remainder=0;
    int count=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    num1 = num;
    num2 = num;

    while(num != 0){
        num = num/10;
        count++;
    }

    while(num1 !=0){
        int x = num1%10;
        remainder = remainder+pow(x,count);
        num1 = num1/10;
    }


    if(remainder == num2){
        printf("Number is a Armstrong number");
    }
    else{
        printf("Number is not Armstrong number");
    }


    getch();
    return 0;
}
