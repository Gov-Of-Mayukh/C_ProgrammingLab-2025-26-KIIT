#include<stdio.h>
void main(){
    int row, col, i, j, max, min;
    printf("Enter number of Rows: ");
    scanf("%d",&row);
    printf("Enter number of Columns: ");
    scanf("%d",&col);

    int shw[row][col];

    for(i=0; i<row; i++){
        printf("\nFor Row %d\n",i+1);
        for(j=0; j<col; j++){
            printf("Enter number %d: ",j+1);
            scanf("%d",&shw[i][j]);
        }
        printf("\n");
    }

    max=shw[0][0];
    min=shw[0][0];

    printf("\nThe Matrix is:\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%4d ",shw[i][j]);
            if(shw[i][j]>max)
                max=shw[i][j];
            if(shw[i][j]<min)
                min=shw[i][j];
        }
        printf("\n");
    }

    printf("The maximum number is %d and the minimum number is %d", max, min);
    printf("\n\n");
}
