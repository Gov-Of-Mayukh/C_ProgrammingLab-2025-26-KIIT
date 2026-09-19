#include<stdio.h>
void main(){
	int num,copy,r,sum=0;
	printf("Enter a 5 digit number: ");
	scanf("%d",&num);
	copy=num;
	if(num>9999 && num<=999999){
		r=num%10;	//1st
		sum=sum+r;
		num=num/10;
		r=num%10;	//2nd
		sum=sum+r;
		num=num/10;
		r=num%10;	//3rd
		sum=sum+r;
		num=num/10;
		r=num%10;	//4th
		sum=sum+r;
		num=num/10;
		r=num%10;	//5th
		sum=sum+r;
		num=num/10;
		printf("\nThe sum of digits of %d is %d\n\n",copy,sum);
	}
	else{
		printf("\nNot a 5 digit number!\n\n");
	}
}
