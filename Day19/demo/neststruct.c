#include<stdio.h>

struct saptami{
    int rno;
    float ht;
    struct sap{
        int d,m,y;
    }shw, mykh;
}/*s1,s2*/;

void main(){
    struct saptami s1, s2;

    printf("Enter roll no and height of 1st student: ");
    scanf("%d %f", &s1.rno, &s1.ht);
    printf("Enter DOB of 1st student(DD MM YYYY): ");
    scanf("%d %d %d", &s1.shw.d, &s1.shw.m, &s1.shw.y);
    printf("\nEnter roll no and height of 2nd student: ");
    scanf("%d %f", &s2.rno, &s2.ht);
    printf("Enter DOB of 2nd student(DD MM YYYY): ");
    scanf("%d %d %d", &s2.mykh.d, &s2.mykh.m, &s2.mykh.y);
    printf("\nStudent 1 - Roll No: %d Height: %f DOB: %d-%d-%d", s1.rno, s1.ht, s1.shw.d, s1.shw.m, s1.shw.y);
    printf("\nStudent 2 - Roll No: %d Height: %f DOB: %d-%d-%d", s2.rno, s2.ht, s2.mykh.d, s2.mykh.m, s2.mykh.y);
    printf("\n\n");
}
