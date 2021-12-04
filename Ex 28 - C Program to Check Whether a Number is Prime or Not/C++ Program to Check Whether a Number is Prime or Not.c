#include<stdio.h>

int main(void){

    int num;

    printf("Enter a number: ");
    scanf("d",num);

    if(num == 0 || num == 1){
        printf("Not a prime number");
    }
    else{
        for(int i=2; i<=num/2; i++){
            if(num%i == 0){
                printf("Not a prime number");


            }

        }
    }

    printf("Is a prime number");

    getch();
    return 0;
}
