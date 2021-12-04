#include <stdio.h>
#include <math.h>

int prime(int x);
int armstrong(int y);
int main(void){

    int num,flag,newv;

    printf("Enter a number: ");
    scanf("%d",&num);

    flag = prime(num);

    if(flag == 0){
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }

    newv = armstrong(num);
    printf("\n\n");

    if(newv==num){
        printf("Armstrong Number");
    }
    else{
        printf("Not a Armstrong Number");
    }



    getch();
    return 0;
}

int prime(int x){
    int flag=0;
    for(int i=2; i<=x/2; i++){
        if(x%i==0){
            flag = 1;
        }
    }
    return flag;
}

int armstrong(int y){
    int count=0;
    int remainder = 0;
    int x = y;
    while(y!=0){
        y = y/10;
        count++;
    }
    printf("\n");

    while(x!=0){
        int z = x%10;
        x = x/10;
        int remainder = remainder + pow(z,count);
    }
    printf("%d",remainder);
}
