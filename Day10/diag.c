#include<stdio.h>
void main(){
    int row, col, i, j;
    printf("Enter number of Rows: ");
    scanf("%d",&row);
    printf("Enter number of Columns: ");
    scanf("%d",&col);
    if(row==col){
        int shw[row][col];

        for(i=0; i<row; i++){
            printf("\nFor Row %d\n",i+1);
            for(j=0; j<col; j++){
                printf("Enter number %d: ",j+1);
                scanf("%d",&shw[i][j]);
            }
            printf("\n");
        }


        printf("\nThe Matrix is:\n");
        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                printf("%4d ",shw[i][j]);
            }
            printf("\n");
        }

        printf("\nThe Diagonal Elements of the Matrix is:\n");
        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                if(i==j)
                    printf("%4d ",shw[i][j]);
                else
                    printf("    ");
            }
            printf("\n");
        }

    }
    else
        printf("\nNot a Square Matrix");
    printf("\n\n");
}
