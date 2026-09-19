/*                  1
                2   3
            4   5   6
        7   8   9  10       */

#include<stdio.h>
void main(){
    int sap=1;
    for(int i=1; i<=4; i++){
        for(int s=4; s>i; s--){
            printf("   ");
        }
        for(int j=1; j<=i; j++){
            printf("%3d", sap);
            sap++;
        }
        printf("\n");
    }
    printf("\n\n");
}
