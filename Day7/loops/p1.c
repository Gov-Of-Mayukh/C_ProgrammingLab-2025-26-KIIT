#include<stdio.h>
void main(){
	int row,col,i,j;
	row=col=9;
	for(i=0;i<=row;i++){
		for(j=0;j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
}
