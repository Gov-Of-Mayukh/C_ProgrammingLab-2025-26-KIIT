#include<stdio.h>
void main(){
	int shw;
	printf("Enter a Year: ");
	scanf("%d",&shw);
	if((shw%4==0 && shw%100!=0) || shw%400==0)
		printf("\n%d is a leap year\n\n",shw);
	else
		printf("\n%d is not a leap year\n\n",shw);
}
