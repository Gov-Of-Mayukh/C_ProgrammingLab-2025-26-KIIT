#include<stdio.h>
#include<string.h>

void main(){
    char shw[100], mykh[100], n, m;
    printf("Enter a string: ");
    fgets(shw, sizeof(shw), stdin);
    printf("\nEnter letter to be replaced: ");
    scanf(" %c", &n);
    printf("\nEnter letter to be replaced: ");
    scanf(" %c", &m);

    for(int i=0; i <= strlen(shw)-1; i++){
        if(shw[i] == n)
            mykh[i] = m;
        else
            mykh[i] = shw[i];
    }

    printf("\nThe new string is: %s", mykh);
    printf("\n\n");
}
