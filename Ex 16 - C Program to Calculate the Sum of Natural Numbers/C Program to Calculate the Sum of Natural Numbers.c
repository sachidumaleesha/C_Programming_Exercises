#include <stdio.h>

int main(main){

    int n;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        sum = sum + i;
    }

    printf("Sum is %d",sum);



    getch();
    return 0;
}
