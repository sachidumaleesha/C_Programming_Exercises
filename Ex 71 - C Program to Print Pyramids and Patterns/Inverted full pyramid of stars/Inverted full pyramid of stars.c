#include <stdio.h>

int main(void){

    int i,k,l;

    for(i=0; i<5; i++){
        for(k=0; k<i; k++){
            printf("  ");
        }
        for(l=0; l<9-2*i; l++){
            printf("* ");
        }
        printf("\n");
    }


    getch();
    return 0;
}
