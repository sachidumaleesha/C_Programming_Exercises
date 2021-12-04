#include <stdio.h>

int main(void){

    int i,j;

    for(i=0; i<5; i++){
        for(j=0; j<5-i; j++){
            printf("* ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
