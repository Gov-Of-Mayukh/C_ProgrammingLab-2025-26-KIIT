#include<stdio.h>
void main(){
	int m;
	printf("Enter marks: ");
	scanf("%d",&m);
	if(m>0&&m<=100){
		if(m>=90)
			printf("\nO\n\n");
		else if (m>=80)
			printf("\nE\n\n");
		else if (m>=70)
			printf("\nA\n\n");
		else if (m>=60)
			printf("\nB\n\n");
		else if (m>=50)
			printf("\nC\n\n");
		else if (m>=40)
			printf("\nD\n\n");
		else if (m<40&&m>=0)
			printf("\nF\n\n");
	}
	else
		printf("\nInvalid Input!!\n\n");

}
