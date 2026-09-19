#include<stdio.h>
void main(){
	int num, r, sum=0;
	printf("Enter a 4 digit number: ");
	scanf("%d",&num);
	if(num>999 && num<=9999){
		r=num%10;	//1st
		sum=sum*10+r;
		num/=10;
		r=num%10;	//2nd
		sum=sum*10+r;
		num/=10;
		r=num%10;	//3rd
		sum=sum*10+r;
		num/=10;
		r=num%10;	//4th
		sum=sum*10+r;
		num/=10;
		printf("\nThe reverse is %d\n\n",sum);
	}
	else
		printf("\nNot a 4 digit number!\n\n");
}
