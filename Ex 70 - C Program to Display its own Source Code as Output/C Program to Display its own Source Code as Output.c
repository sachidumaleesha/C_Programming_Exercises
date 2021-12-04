#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *fp;
    char sentence[200];
    char letter;

    fp = fopen("One.txt","r");

    if(fp == NULL){
        printf("File not exist");
        getch();
        exit(0);
    }
    else{
        printf("File exist\n\n");
    }

    letter = fgetc(fp);

    while(!feof(fp)){
        printf("%c",letter);
        letter = fgetc(fp);
    }

    fclose(fp);

    getch();
    return 0;
}
