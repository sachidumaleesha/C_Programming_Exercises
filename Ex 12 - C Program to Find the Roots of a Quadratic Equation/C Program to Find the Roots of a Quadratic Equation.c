#include <stdio.h>
#include <math.h>

int main(void){

    printf("Quadratic Equation = Ax^2 + Bx + C = 0\n");
    printf("'A' can not be 0\n\n");

    int a,b,c,descriminant;
    double root1,root2;

    printf("Enter coefficients of A: ");
    scanf("%d",&a);

    printf("Enter coefficients of B: ");
    scanf("%d",&b);

    printf("Enter coefficients of C: ");
    scanf("%d",&c);

    if(a == 0){
        return 0;
    }

    descriminant = (b*b) - (4*a*c);
    printf("Descriminant: ",descriminant);

    printf("\n\n");

    if(descriminant > 0){
        root1 = (-b + sqrt(descriminant))/(2*a);
        root1 = (-b - sqrt(descriminant))/(2*a);
        printf("Root 01: %.2lf\n",root1);
        printf("Root 01: %.2lf",root1);
    }
    else if(descriminant < 0){
        root1 = (-b + sqrt(-descriminant))/(2*a);
        root1 = (-b - sqrt(-descriminant))/(2*a);
        printf("Root 01: %.2lf\n",root1);
        printf("Root 01: %.2lf",root1);
    }
    else{
        root1 = root2 = -b/(2*a);
        printf("Root 01: %.2lf\n",root1);
        printf("Root 01: %.2lf",root1);
    }




    getch();
    return 0;
}
