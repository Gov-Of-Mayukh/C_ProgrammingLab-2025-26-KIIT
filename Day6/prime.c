#include<stdio.h>
void main(){
	int num,count=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(int i=1; i<=num; i++){
		if(num%i==0)
			count++;
	}
	if(count==2)
		printf("\n%d is a prime number\n\n",num);
	else
		printf("\n%d is not a prime number\n\n",num);
}
