#include <stdio.h>

int main(void){

    char c;

    printf("Enter a character: ");
    scanf("%c",&c);

    if(!isalpha(c)){
        printf("Invalid input");
    }
    else if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u'){
        printf("It's a vowel letter");
    }
    else{
        printf("It's consonant letter");
    }





    getch();
    return 0;
}
