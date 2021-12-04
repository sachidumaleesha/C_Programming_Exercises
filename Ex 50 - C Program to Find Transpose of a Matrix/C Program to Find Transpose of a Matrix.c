//C Program to Find Transpose of a Matrix

#include <stdio.h>

int main(void){

    int rows,columns;
    int i,j;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    printf("Enter number of columns: ");
    scanf("%d",&columns);

    puts("");

    int matrix[rows][columns];

    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("Enter row %d column %d element: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nNormal Matrix\n");
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n\nTranspose of a Matrix\n");
    for(i=0; i<columns; i++){
        for(j=0; j<rows; j++){
            printf("%d\t",matrix[j][i]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
