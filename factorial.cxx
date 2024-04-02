#include <stdio.h>
#include <conio.h>
int main()
{
    long int n, i, fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    { fact *= i;
        }
     printf("Factorial of %d = %d", n, fact);

     return 0;
}