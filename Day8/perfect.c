#include<stdio.h>
void main(){
	int r, shw, sum=0;
	for(int i=1; i<=999999; i++){
		shw=i;
		sum=0;
		for(int j=1; j<=shw/2; j++){
			if(shw%j==0)
				sum+=j;
		}
		if(sum==i)
			printf("\n%d",i);
	}
	printf("\n\n");
}
