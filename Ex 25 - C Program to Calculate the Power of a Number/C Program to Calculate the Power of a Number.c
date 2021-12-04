#include <stdio.h>

int main(void){


    int base,power;
    int result = 1;

    printf("Enter the base: ");
    scanf("%d",&base);

    printf("Enter the power: ");
    scanf("%d",&power);

    while( power != 0){
        result = result * base;
        power--;
    }

    printf("Answer is %d",result);



    getch();
    return 0;

    /* #include <math.h>
#include <stdio.h>

int main() {
    double base, exp, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &exp);

    // calculates the power
    result = pow(base, exp);

    printf("%.1lf^%.1lf = %.2lf", base, exp, result);
    return 0;
}
 */
}
