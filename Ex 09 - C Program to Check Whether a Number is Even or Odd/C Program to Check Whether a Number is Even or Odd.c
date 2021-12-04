#include <stdio.h>

int main(void){

    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%2 == 0){
        printf("It's an even number");
    }
    else if(n%2 == 1){
        printf("It's an odd number");
    }
    else{
        printf("Invalid input");
    }


    getch();
}
