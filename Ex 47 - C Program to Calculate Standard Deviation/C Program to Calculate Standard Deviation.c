#include <stdio.h>
#include <math.h>
int main(void){

    float numbers[10];
    float total = 0.0;
    float mean;
    float sd = 0.0;
    float deviation;
    int i;

    for(i=0; i<10; i++){
        printf("Enter element %d: ",i+1);
        scanf("%f",&numbers[i]);

        total = total + numbers[i];
    }

    mean = total/10.0;

    for(i=0; i<10; i++){
        sd = sd + pow((numbers[i] - mean),2);
    }

    deviation = sqrt(sd/10);

    printf("Standard Deviation: %.2f",deviation);


    getch();
    return 0;
}
