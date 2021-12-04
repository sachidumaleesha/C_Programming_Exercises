#include <stdio.h>

int main(void){

    int n;
    int fact = 1;


    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
       fact = fact * i;
    }

    printf("Factorial is %d",fact);


    getch();
    return 0;
}
