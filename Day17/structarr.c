#include<stdio.h>

struct saptami{
    int rno;
    char nm[20], gen[1];
    float mrk;
};

void main(){
    int n;
    printf("Enter number of Student Entries: ");
    scanf("%d",&n);
    struct saptami shw[n];
    for(int i=0; i<n; i++){
        printf("\nEnter Roll No: ");
        scanf("%d",&shw[i].rno);
        printf("Enter Name: ");
        scanf("%s",&shw[i].nm);
        printf("Enter Gender: ");
        scanf("%s",&shw[i].gen);
        printf("Enter marks: ");
        scanf("%f",&shw[i].mrk);
    }

    printf("\nThe student details are:");
    printf("\nSl.No.\tRoll No.\tName\tGender\tMarks\n");
    printf("-----------------------------------------------------------\n");
    for(int i=0; i<n; i++)
        printf("%6d\t%8d\t%4s\t%6s\t%5.2f",i+1, shw[i].rno, shw[i].nm, shw[i].gen, shw[i].mrk);
    printf("\n\n");
}

