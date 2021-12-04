//C Program to Calculate Average Using Arrays

#include <stdio.h>

int main(void){

    int number_count;
    float number_array[150];
    int i;
    float total = 0.0;
    float average;

    printf("How many numbers do you want to enter?: ");
    scanf("%d",&number_count);

    while(!(0<=number_count && number_count<=100)){
        printf("Sorry!. Invalid number\n");
        printf("Enter a number: ");
        scanf("%d",&number_count);
    }

    for(i=0; i<number_count; i++){
        printf("%d Enter a number: ",i+1);
        scanf("%f",&number_array[i]);

        total = total + number_array[i];
    }

    average = total/number_count;
    printf("Average: %.2f",average);

    getch();
    return 0;
}
