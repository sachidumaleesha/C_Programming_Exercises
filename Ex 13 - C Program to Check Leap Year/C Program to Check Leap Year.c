#include <stdio.h>

int main(void){

    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%4 == 0){
        printf("This year is a leap year");
    }
    else{
        printf("This year is not a leap year");
    }


    getch();
    return 0;
}
