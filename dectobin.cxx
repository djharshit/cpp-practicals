#include <math.h>
#include <stdio.h>
#include <conio.h>
void main() {
    long bin;
    int n, rem ,i =1, step =1;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n != 0) {
        rem = n % 2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, rem, n / 2);
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    	printf("Binary = %ld",bin);
}