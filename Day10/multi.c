#include<stdio.h>
void main(){
    int row1, row2, col1, col2, i, j, k, sum=0;

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
    }

    printf("\n--------------------------\n");

    printf("\nFor Matrix 2:\n");
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

    printf("\n--------------------------\n");

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

    printf("\n--------------------------\n");

    if(col1==row2){
        int smex[row1][col2];

        for(i=0; i<row1; i++){
            for(j=0; j<col2; j++)
                smex[i][j]=0;
        }

        printf("\nThe Product of the two Matrices is:\n");
        for(i=0; i<row1; i++){
            for(j=0; j<col2; j++){
                sum=0;
                for(k=0; k<col1; k++)
                    sum+=shw[i][k]*mykh[k][j];
                smex[i][j]=sum;
            }
        }

        for(i=0; i<row1; i++){
            for(j=0; j<col2; j++)
                printf("%4d",smex[i][j]);
            printf("\n");
        }
    }

    else
        printf("\nMultiplication not possible");

    printf("\n\n");
}
