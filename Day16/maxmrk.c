#include<stdio.h>

struct saptami{
    int rno;
    float mrk;
    char gen;
};

void main(){
    int n, ind;
    float max=0.0;
    printf("Enter number of Entries: ");
    scanf("%d",&n);

    if(n>=4){
        struct saptami st[n];

        for(int i=0; i<n; i++){
            printf("\nEnter roll number, marks  and gender: ");
            scanf("%d %f %c",&st[i].rno, &st[i].mrk, &st[i].gen);
        }

        max=st[0].mrk;
        printf("\n%f",max);

        printf("\nRoll No     Marks     Gender");
        for(int i=0; i<n; i++){
            printf("\n%6d%7.2f%8c",st[i].rno, st[i].mrk, st[i].gen);
            if(st[i].mrk>max){
                max=st[i].mrk;
                ind=i;
            }
        }

        printf("\nMaximum scored by: ");
        printf("\nRoll No   Marks   Gender\n%6d %7.2f%8c", st[ind].rno, st[ind].mrk, st[ind].gen);
    }
    else
        printf("\nInsufficient Number of Input Data!");
    printf("\n\n");
}
