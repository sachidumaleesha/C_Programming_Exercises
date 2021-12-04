#include <stdio.h>

int main(){

    int pre = 0;
    int cur = 1;
    int n;
    int temp;

    printf("Enter how many numbers do you want in fibonnacci series: ");
    scanf("%d",&n);

    printf("%d\t%d",pre,cur);

    for(int i=3; i<=n; i++){
        temp = cur;
        cur = pre+cur;
        pre = temp;

        printf("\t%d",cur);

    }



    getch();
    return 0;
}
