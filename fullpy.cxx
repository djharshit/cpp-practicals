#include <stdio.h>
#include <conio.h>
void main() {
   int i, sp, r, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &r);
   for (i = 1; i <= r; ++i, k = 0) {
      for (sp = 1; sp <= r - i; ++sp)
      {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
}