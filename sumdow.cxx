#include <stdio.h>
#include <conio.h>
void main()
{ int n, sum=0, i=0;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  do
  { sum += i++;
  } while(i<=n);

 printf("Sum = %d", sum);

}