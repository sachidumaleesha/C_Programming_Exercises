#include <stdio.h>

int main(void){

    int n;
    int multi = 0;

    printf("Enter an integer number that you want to generate muliplication table: ");
    scanf("%d",&n);
    printf("\n");

    for(int i=1; i<=13; i++){
        multi = 0;
        multi = i*n;
        printf("%d x %d = %d\n",n,i,multi);
    }


    getch();
    return 0;
}
