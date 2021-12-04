#include <stdio.h>

main(){

    int dividend,divisor,quatient;
    float remainder;

    printf("Enter your dividend: ");
    scanf("%d",&dividend);

    printf("Enter your devisor: ");
    scanf("%d",&divisor);

    quatient = dividend/divisor;
    remainder = dividend%divisor;

    printf("\n");
    printf("Quatient = %d\n",quatient);
    printf("Remainder = %.2f",remainder);




    getch();
    return 0;
}
