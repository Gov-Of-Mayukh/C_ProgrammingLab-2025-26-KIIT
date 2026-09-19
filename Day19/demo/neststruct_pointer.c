#include<stdio.h>
#include<stdlib.h>

struct saptami{
    int rno;
    float ht;
    struct sap{
        int d,m,y;
    }*shw;
}/*s1,s2*/;

void main(){
    struct saptami s1, s2;

    s1.shw=(struct sap*) malloc(2*sizeof(struct sap));
    if(s1.shw == NULL){
        printf("\nMemory Allocation Failed");
        exit(1);
    }

    printf("Enter roll no and height of 1st student: ");
    scanf("%d %f", &s1.rno, &s1.ht);
    printf("Enter DOB of 1st student(DD MM YYYY): ");
    scanf("%d %d %d", &s1.shw[0].d, &s1.shw[0].m, &s1.shw[0].y);
    printf("\nEnter roll no and height of 2nd student: ");
    scanf("%d %f", &s2.rno, &s2.ht);
    printf("Enter DOB of 2nd student(DD MM YYYY): ");
    scanf("%d %d %d", &s2.shw[1].d, &s2.shw[1].m, &s2.shw[1].y);
    printf("\nStudent 1 - Roll No: %d Height: %f DOB: %d-%d-%d", s1.rno, s1.ht, s1.shw[0].d, s1.shw[0].m, s1.shw[0].y);
    printf("\nStudent 2 - Roll No: %d Height: %f DOB: %d-%d-%d", s2.rno, s2.ht, s2.shw[1].d, s2.shw[1].m, s2.shw[1].y);
    printf("\n\n");
}
