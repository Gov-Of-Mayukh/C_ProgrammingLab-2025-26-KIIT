#include<stdio.h>
#include<string.h>

void main(){
    char shw[50];
    int s=0;
    printf("Enter a string: ");
    fgets(shw, sizeof(shw), stdin);
    if(shw[strlen(shw)-1] == '\n')
        shw[strlen(shw)-1] = '\0';

    printf("\nUsing library function, Length: %lu", strlen(shw));

    for(int i=0; shw[i]!='\0'; i++)
        s++;
    printf("\nWithout using library function, Length: %d", s);
    printf("\n\n");
}
