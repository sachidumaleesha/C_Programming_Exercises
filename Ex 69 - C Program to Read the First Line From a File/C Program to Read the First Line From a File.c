#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *fp;
    char sentence[200];

    fp = fopen("One.txt","r");

    if(fp == NULL){
        printf("File not exist");
        getch();
        exit(0);
    }
    else{
        printf("File exist\n");
    }

    fscanf(fp, "%[^\n]" ,sentence);
    printf("%s",sentence);

    fclose(fp);

    getch();
    return 0;
}
