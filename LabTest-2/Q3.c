//Q3.

#include<stdio.h>

struct employee{
    int id;
    char nm[20];
    float ht;
};

void main(){
    int n, ind, i=0;
    float max;
    printf("Enter number of records: ");
    scanf("%d", &n);
    if(n>=4){
        struct employee shw[n];
        for(; i<n; i++){
            printf("\nEnter ID, Name and Height: ");
            scanf("%d%s%f", &shw[i].id, &shw[i].nm, &shw[i].ht);
        }

        max=shw[0].ht;

        for(i=0 ; i<n; i++){
            if(shw[i].ht > max)
                ind = i;
        }

        printf("ID: %d, Name: %s, Height: %.2f", shw[ind].id, shw[ind].nm, shw[ind].ht);
    }

    else
        printf("\nInsufficient Records!");
    printf("\n\n");
}
