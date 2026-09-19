#include<stdio.h>
#include<string.h>

void main(){
    char shw[100], sub[100];
    int i, j, k, found=0;
    printf("Enter a string: ");
    fgets(shw, sizeof(shw), stdin);
    printf("\nEnter a substring to search: ");
    scanf("%s",&sub);

    for(i=0; shw[i] != '\0'; i++){
        if(shw[i] == sub[0]){
            j = i;
            k = 0;
            while(shw[j]!='\0' && sub[k]!='\0' && shw[j]==sub[k]){
                j++;
                k++;
            }

            if(sub[k] == '\0'){
                printf("\nSubstring \"%s\" found at index %d", sub, i);
                found=1;
                break;
            }
        }
    }

    if(!found)
        printf("\nSubstring not found");

    printf("\n\n");
}
