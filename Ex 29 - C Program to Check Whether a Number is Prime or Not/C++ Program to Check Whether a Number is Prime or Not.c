#include<stdio.h>

int main(void){

    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num == 0 || num == 1 ){
        printf("Not a prime number");
    }
    else if(num == 2 || num == 3){
            printf("Prime number");
    }
    else {
        for(int i=2; i<=num/2; i++){
            if(num%i == 0){
                printf("Not a prime number");
                break;
            }
            else{
                printf("Prime number");
                break;
            }
        }
    }

    getch();
    return 0;
}
