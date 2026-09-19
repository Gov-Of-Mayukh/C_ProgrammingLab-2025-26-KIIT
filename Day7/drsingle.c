#include<stdio.h>
void main(){
	int num,copy,r,sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	copy=num;

	a:
		sum=0;
		while(num>0){
			r=num%10;
			sum+=r;
			num/=10;
		}
		printf("\nDigital Root of %d is %d",copy,sum);
		num=copy=sum;
		if(sum>9)
			goto a;
	printf("\n\n");
}
