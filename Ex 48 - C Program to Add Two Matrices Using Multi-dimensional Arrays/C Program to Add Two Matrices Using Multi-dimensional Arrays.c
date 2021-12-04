#include <stdio.h>

int main(void){

    int rows,columns;
    int i,j;

    printf("===== Enter numbers to rows and columns between 0 - 100 =====\n\n");
    printf("Enter number of rows: ");
    scanf("%d",&rows);

    printf("Enter number of columns: ");
    scanf("%d",&columns);

    int matrix1[rows][columns];
    int matrix2[rows][columns];

    printf("\n===== Matrix 01 =====\n");
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("Enter row %d column %d element: ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("\n\n===== Matrix 02 =====\n");
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("Enter row %d column %d element: ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }

    printf("\n\n===== Output =====\n\n");
    printf("===== Matrix 01 =====\n");
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n===== Matrix 02 =====\n");
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\n===== Matrix 01 + Matrix 02 =====\n");
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d\t",matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }


    getch();
    return 0;
}
