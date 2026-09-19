#include<stdio.h>

struct saptami{
    int id, sal, age;
    char nm[20];
};

struct misaki{
    int id, sal, age;
    char nm[20];
};

void main(){
    int n, i;
    printf("Enter number of entries: ");
    scanf("%d",&n);
    struct saptami shw[n];
    for(i=0; i<n; i++){
        printf("Enter Name: ");
        scanf("%s",&shw[i].nm);
        printf("Enter Age: ");
        scanf("%d",&shw[i].age);
        printf("Enter ID: ");
        scanf("%d",&shw[i].id);
        printf("Enter Salary: ");
        scanf("%d",&shw[i].sal);
    }

    printf("\nThe details of Saptami are: ");
    printf("\nName\tAge\tID\tSalary\n");
    for(i=0; i<n; i++){
        printf("\n%4s\t%3d\t%2d\t%6d",shw[i].nm, shw[i].age, shw[i].id, shw[i].sal);
    }
    printf("\n\n");
}
