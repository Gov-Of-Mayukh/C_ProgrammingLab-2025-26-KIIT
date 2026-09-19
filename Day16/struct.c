#include<stdio.h>

/*struct saptami{
    int rno;
    float ht;
};

void main(){
    struct saptami st1, st2;
    printf("Enter roll number and height: ");
    scanf("%d%f",&st1.rno, &st1.ht);
    printf("Roll no: %d and Height: %f",st1.rno, st1.ht);
    printf("\n\n");
}*/

//OR


struct saptami{
    int rno, mrk;
    float ht;
} st1;

void main(){
    printf("Enter roll number, height and marks: ");
    scanf("%d %f %d",&st1.rno, &st1.ht, &st1.mrk);
    printf("Roll no: %d\nHeight: %f\nMarks: %d",st1.rno, st1.ht, st1.mrk);
    printf("\n\n");
}

