#include<stdio.h>
#include<ctype.h>
void main(){
	char a,shw;
	printf("Enter a character: ");
	scanf("%c",&a);
	if(isalpha(a)){
		a=tolower(a);
	 	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
			printf("It is a vowel\n\n");
		else
			printf("It is a consonant\n\n");
	}
	else if(a>=48 && a<=57)
		printf("It is a digit\n\n");
	else
		printf("It is a special character\n\n");
}
