#include <stdio.h>

int main(void){

    int number_count;
    int i;
    float number_array[150];
    float max = 0.0;

    printf("How many numbers do you want to enter: ");
    scanf("%d",&number_count);

    while(!(0<number_count && number_count<100)){
        printf("Sorry! Invalid Number\n");
        printf("How many numbers do you want to enter: ");
        scanf("%d",&number_count);
    }

    for(i=0; i<number_count; i++){
        printf("Enter number %d: ",i+1);
        scanf("%f",&number_array[i]);

        if(number_array[i]>max){
            max = number_array[i];
        }
    }

    printf("Largest number: %.2f",max);

    getch();
    return 0;
}
