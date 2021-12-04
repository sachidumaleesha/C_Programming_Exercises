#include <stdio.h>

int main(void){

    char c;

    printf("Enter a character: ");
    scanf("%c",&c);

    if(isalpha(c)){
        printf("You entered a alphabet");
    }
    else{
        printf("character Not a alphabet character");
    }




    getch();
}
