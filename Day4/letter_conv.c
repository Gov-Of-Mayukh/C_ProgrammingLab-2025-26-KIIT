#include<stdio.h>
#include<ctype.h>

void main(){
	char shw;
	printf("Enter a Character: ");
	scanf("%c",&shw);
	if(isupper(shw))
		printf("\nIt is in UpperCase!\n\n");
	else
		printf("\nUpper case is %c\n\n",toupper(shw));
}

