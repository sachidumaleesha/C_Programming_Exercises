#include <stdio.h>

int main(void){

    int i,j;
    char letter = 'A';

    for(i=0; i<5; i++){
        for(j=0; j<=i; j++){
            printf("%c ",letter);
        }
        printf("\n");
        letter++;
    }

    getch();
    return 0;
}
