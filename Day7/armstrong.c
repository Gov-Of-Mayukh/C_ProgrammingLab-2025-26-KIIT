#include<stdio.h>
#include<math.h>
void main(){
	int copy,r,sum;
	for(int i=100; i<=999; i++){
		sum=0;
		copy=i;
		while(copy>0){
			r=copy%10;
			sum+=pow(r,3);
			copy/=10;
		}
		if(i==sum)
			printf("\n%d is an Armstrong Number",i);
	}
	printf("\n\n");
}
