#include <stdio.h>

int main(void){

    int n;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d",&n);

    /*do{
        n = n/10;
        count++;
    }while(n != 0); */

    while (n != 0){
        n = n/10;
        count++;
    }

    printf("Numbers: %d",count);

    getch();
    return 0;
}
