#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *fp;
    char sentence[200];

    fp = fopen("One.txt","w");

    if(fp == NULL){
        printf("File not created");
        getch();
        exit(0);
    }
    else{
        printf("File created\n");
    }

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(fp, "%s", sentence);

    fclose(fp);


    getch();
    return 0;
}
