#include <stdio.h>

int main(void){

    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>0){
        printf("You entered a positive number");
    }
    else if(n<0){
        printf("You entered a negative number");
    }
    else{
        printf("You enterd 0");
    }


    getch();
    return 0;
}
