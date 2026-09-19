#include<stdio.h>
#include<string.h>

void main(){
    char shw[50], mykh[50];
    int j=0;
    printf("Enter a string: ");
    fgets(shw, sizeof(shw), stdin);

    for(int i=strlen(shw)-1; i>=0; i--){
        mykh[j] = shw[i];
        j++;
    }

    printf("%s\n\n", mykh);
}
