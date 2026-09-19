#include<stdio.h>
#include<ctype.h>
enum week{sunday, monday, tuesday, wednesday, thursday, friday, saturday} today;

void main(){
    //enum week today;
    today=wednesday;
    printf("%d", ++today);
    printf("\n\n");
}
