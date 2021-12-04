#include <stdio.h>

int main(void){

    int a,b,c;

    printf("Enter a number: ");
    scanf("%d",&a);

    printf("Enter a number: ");
    scanf("%d",&b);

    printf("Enter a number: ");
    scanf("%d",&c);

    printf("\n");

    if(a>b && a>c){
        printf("Largest number: %d",a);
    }
    else if(b>a && b>c){
        printf("Largest number: %d",b);
    }
    else if(c>a && c>b){
        printf("Largest number: %d",c);
    }
    else if(a == b && b == c){
        printf("All numbers are same");
    }
    else{
        printf("Invalid input");
    }




    getch();
    return 0;

}
