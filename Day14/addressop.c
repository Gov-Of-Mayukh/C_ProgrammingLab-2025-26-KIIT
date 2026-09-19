#include<stdio.h>
void main(){
    int n=478;
    printf("Value of n: %d", n);
    printf("\nUnsigned Int, Value of &n: %u", &n);      //%u=unsigned integer
    printf("\nhu Unsigned Int, Value of &n: %hu", &n);  //%hu=shortened unsigned integer
    printf("\nHexadecimal, Value of &n: %x", &n);       //%x=hexaddecimal
    printf("\nhx Hexadecimal, Value of &n: %hx", &n);   //%x=shortened hexaddecimal
    printf("\nPointer, Value of &n: %p", &n);           //%x=pointer
    printf("\nOctal, Value of &n: %o", &n);             //%o=octal
    printf("\nho Octal, Value of &n: %ho", &n);         //%o=shortened octal
    printf("\n\n");
}
