#include<stdio.h>
void main(){
	int a;
	printf("Enter Month Number: ");
	scanf("%d",&a);
	if(a==1)
		printf("\nJanuary\n\n");
	else if(a==2)
		printf("\nFebruary\n\n");
	else if(a==3)
		printf("\nMarch\n\n");
	else if(a==4)
		printf("\nApril\n\n");
	else if(a==5)
		printf("\nMay\n\n");
	else if(a==6)
		printf("\nJune\n\n");
	else if(a==7)
		printf("\nJuly\n\n");
	else if(a==8)
		printf("\nAugust\n\n");
	else if(a==9)
		printf("\nSeptember\n\n");
	else if(a==10)
		printf("\nOctober\n\n");
	else if(a==11)
		printf("\nNovember\n\n");
	else if(a==12)
		printf("\nDecember\n\n");
	else
		printf("\nInvalid Input!!\n\n");
}
