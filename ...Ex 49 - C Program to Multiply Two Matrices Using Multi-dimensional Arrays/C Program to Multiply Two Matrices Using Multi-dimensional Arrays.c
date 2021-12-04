//C Program to Multiply Two Matrices Using Multi-dimensional Arrays

#include <stdio.h>

int main(void){

    int matrix1_rows,matrix1_columns;
    int matrix2_rows,matrix2_columns;
    int i,j;
    int total1 = 0;
    int total2 = 0;

    printf("Enter number of rows in matrix 01: ");
    scanf("%d",&matrix1_rows);

    printf("Enter number of columns in matrix 01: ");
    scanf("%d",&matrix1_columns);

    puts("");

    printf("Enter number of rows in matrix 02: ");
    scanf("%d",&matrix2_rows);

    printf("Enter number of columns in matrix 02: ");
    scanf("%d",&matrix2_columns);

    int matrix1[matrix1_rows][matrix1_columns];
    int matrix2[matrix2_rows][matrix2_columns];

    printf("\n===== Matrix 01 =====\n");
    for(i=0; i<matrix1_rows; i++){
        for(j=0; j<matrix1_columns; j++){
            printf("Enter row %d column %d element: ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("\n===== Matrix 02 =====\n");
    for(i=0; i<matrix2_rows; i++){
        for(j=0; j<matrix2_columns; j++){
            printf("Enter row %d column %d element: ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }

    printf("\n===== Answers =====\n");
    printf("\n===== Matrix 01 =====\n");
    for(i=0; i<matrix1_rows; i++){
        for(j=0; j<matrix1_columns; j++){
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n===== Matrix 02 =====\n");
    for(i=0; i<matrix2_rows; i++){
        for(j=0; j<matrix2_columns; j++){
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
    }


    printf("\n===== Matrix 01 * Matrix 02 =====\n");
    for(i=0; i<matrix1_rows; i++){
        for(j=0; j<matrix1_columns; j++){
            total1 = total1 + matrix1[i][j] * matrix2[j][i];
            total2 = total2 + matrix1[i+1][j+1] * matrix2[j+1][i+1];
        }
        printf("%d\t%d",total1,total2);
        total1 = total2 = 0;
        printf("\n");
    }



    getch();
    return 0;
}
