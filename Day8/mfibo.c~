#include<stdio.h>
#include<stdbool.h>
void main(){
	int i, n, c, a=4, b=5;
	bool mykh=true;
	printf("Enter Range: ");
	scanf("%d", &n);
    int shw[n];
    shw[0]=a;
    shw[1]=b;
	for(i=2; i<n; i++){
		c=a+b;
		a=b;
		b=c;
		shw[i]=c;
	}

    printf("\nThe Fibonacci Series is: ");
    for(i=0;i<n;i++)
        printf("%d ",shw[i]);

    printf("\nThe numbers which are not in this Fibonacci Series are:\n");
    for(i=0;i<c;i++){
        mykh=false;
        for(int j=0;j<n;j++){
            if(i==shw[j]){
                mykh=true;
                break;
            }
        }
        if(!mykh)
            printf("%d ",i);
    }

	printf("\n\n");
}
