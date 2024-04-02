#include <stdio.h>
#include <conio.h>
void main() {
   int i, j,k, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (k = 1; k <= i; ++k){
         printf(" "); }
      for (j = 5; j >= i; --j) {
         printf(" %d", j);
      }
      printf("\n");
   }
}