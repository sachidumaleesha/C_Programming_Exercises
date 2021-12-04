#include <stdio.h>

int main(){

    int num1,num2,lcm,gcd;

    printf("Enter a number: ");
    scanf("%d",&num1);

    printf("Enter a number: ");
    scanf("%d",&num2);

    for(int i=1; i<=num1 && i<=num2; i++){
        if(num1%i == 0 && num2%i ==0){
            gcd = i;
        }
    }

    lcm = (num1*num2)/gcd;
    printf("Least common multiple: %d",lcm);




    getch();
    return 0;

}
