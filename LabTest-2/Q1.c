//Q1.

#include<stdio.h>
void main(){
    int shw[]={10,11,9,8,17,20,21,18,15,23};
    int low=shw[0], slow=shw[9];
    for(int i=0; i<10; i++){
        if(shw[i]<low)
            low=shw[i];
    }
    for(int i=0; i<10; i++){
        if(shw[i]>low && shw[i]<slow)
            slow=shw[i];
    }
    printf("\nSecond lowest number : %d", slow);
    printf("\n\n");
}
