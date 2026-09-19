#include<stdio.h>
void main(){
    int row1, row2, col1, col2, i, j, sum=0;

    printf("For Matrix 1:\n");
    printf("Enter number of Rows: ");
    scanf("%d",&row1);
    printf("Enter number of Columns: ");
    scanf("%d",&col1);
    int shw[row1][col1];

    for(i=0; i<row1; i++){
        printf("\nFor Row %d\n",i+1);
        for(j=0; j<col1; j++){
            printf("Enter number %d: ",j+1);
            scanf("%d",&shw[i][j]);
        }
        printf("\n");
    }

    printf("For Matrix 2:\n");
    printf("Enter number of Rows: ");
    scanf("%d",&row2);
    printf("Enter number of Columns: ");
    scanf("%d",&col2);

    int mykh[row2][col2];

    for(i=0; i<row2; i++){
        printf("\nFor Row %d\n",i+1);
        for(j=0; j<col2; j++){
            printf("Enter number %d: ",j+1);
            scanf("%d",&mykh[i][j]);
        }
        printf("\n");
    }


    printf("\nMatrix 1 is:\n");
    for(i=0; i<row1; i++){
        for(j=0; j<col1; j++){
            printf("%4d ",shw[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2 is:\n");
    for(i=0; i<row2; i++){
        for(j=0; j<col2; j++){
            printf("%4d ",mykh[i][j]);
        }
        printf("\n");
    }



    if(row1==row2 && col1==col2){
        printf("\nThe Sum of the two Matrices is:\n");
        for(i=0; i<row1; i++){
            for(j=0; j<col1; j++)
                    printf("%4d",shw[i][j] + mykh[i][j]);

            printf("\n");
        }
    }

    else
        printf("\nAddition not possible");

    printf("\n\n");
}
