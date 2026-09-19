#include<stdio.h>
void main(){
	int num, copy, r, sum=0;
	printf("Enter 4 digit integer: ");
	scanf("%d",&num);
	if(num>999 && num<=9999){
		copy=num;
		r=num%10;	//1st
		sum=sum*10+r;
		num=num/10;
		r=num%10;	//2nd
		sum=sum*10+r;
		num=num/10;
		r=num%10;	//3rd
		sum=sum*10+r;
		num=num/10;
		r=num%10;	//4th
		sum=sum*10+r;
		num=num/10;
		printf("\nThe reverse of %d is %d\n\n",copy,sum);
	}
	else{
		printf("\nNot a 4 digit numer!\n\n");
	}
}
