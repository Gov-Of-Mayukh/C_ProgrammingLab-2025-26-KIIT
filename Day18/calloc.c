#include<stdio.h>
#include<stdlib.h>
void main(){
    int n, i, *ptr, sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    ptr=(int*)calloc(n, sizeof(int));

    //if memory cannot be allocated
    if(ptr == NULL){
        printf("Error! Memory cannot be allocated");
        exit(0);
    }

    printf("\nEnter Elements: ");
    for(i=0; i<n; ++i){
        scanf("%d", ptr+i);
        sum+=*(ptr+i);
    }

     printf("\nAllocated Memory: ");
    for(i=0; i<n; ++i)
        printf("%pc ", ptr+i);

    printf("Sum = %d", sum);

    //deallocating memory
    free(ptr);
    printf("\n\n");
}
