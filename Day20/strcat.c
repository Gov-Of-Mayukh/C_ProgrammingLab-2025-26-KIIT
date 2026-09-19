#include<stdio.h>
#include<string.h>

void main(){
    char shw[100], mykh[50];
    printf("Enter 1st String: ");
    fgets(shw, sizeof(shw), stdin);
    printf("Enter 2nd String: ");
    fgets(mykh, sizeof(mykh), stdin);
    printf("String 1: %s\nString 2: %s", shw, mykh);

    strcat(shw, mykh);

    printf("\nConcatinated String: %s", shw);
    printf("\n\n");
}
