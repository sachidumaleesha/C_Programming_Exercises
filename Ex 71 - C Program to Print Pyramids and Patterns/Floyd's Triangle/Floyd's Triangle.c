#include <stdio.h>

int main(void){

    int i,k;
    int l=1;

    for(i=0; i<4; i++){
       for(k=0; k<1+i; k++){
            printf("%d ",l);
            l++;
       }
       printf("\n");
    }

    getch();
    return 0;
}
