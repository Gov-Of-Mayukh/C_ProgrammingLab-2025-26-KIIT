#include<stdio.h>
void main(){
    FILE *file;
    file = fopen("monju.txt","w");

    char text[80];
    int i, c;

    printf("Enter a String: ");
    scanf("%[^\n]", text);

    for(c=0; c<=10; c++){
        for(i=0; text[i]; i++)
            putc(text[i], file);
        putc('\n',file);
    }

    fclose(file);
}
