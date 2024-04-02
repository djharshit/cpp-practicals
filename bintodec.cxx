#include <math.h>
#include <stdio.h>
#include <conio.h>
void main() {
    long n;
    int dec = 0,i=0,rem;
    printf("Enter a binary number: ");
    scanf("%ld", &n);
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
   printf("Decimal = %d",dec);
}