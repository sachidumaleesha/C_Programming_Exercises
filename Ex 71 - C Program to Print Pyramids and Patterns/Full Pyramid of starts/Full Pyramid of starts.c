#include <stdio.h>

int main(void){

    int i,j,k;

    for(i=0; i<5; i++){
        for(j=0; j<5-i-1; j++){
            printf("  ");
        }
        for(k=0; k<1+2*i; k++){
                printf("* ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
