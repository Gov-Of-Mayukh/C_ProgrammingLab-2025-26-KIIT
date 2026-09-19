#include<stdio.h>
#include<string.h>

void main(){
    int i, len=0;
    char shw[100];
    printf("Enter a string: ");
    fgets(shw, sizeof(shw), stdin);

    if(shw[strlen(shw)-1] == '\n')
        shw[strlen(shw)-1]='\0';
    printf("\nLength using strlen() = %lu",strlen(shw));
    for(i=0; shw[i]!='\0'; i++)
        len++;
    printf("\nLength without using strlen() = %d",len);
    printf("\n\n");
}
