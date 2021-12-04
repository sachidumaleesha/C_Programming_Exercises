#include <stdio.h>

int main(void){

    int num1,num2,flag;

    printf("Enter your 1st number: ");
    scanf("%d",&num1);

    printf("Enter your 2nd number: ");
    scanf("%d",&num2);

    flag = checkprimenumber(num1,num2);
    printf("%d ",flag);



    getch();
    return 0;
}

int checkprimenumber(int num1,int num2){
    int min,max,i,flag;

    if(num1>num2){
       max = num1;
       min = num2;
    }
    else{
        max = num2;
        min = num1;
    }

    while(min<=max){
        flag = 0;
        for(i=2; i<=min/2; i++){
            if(min%i==0){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            return min;
        }
        min++;
    }
}

