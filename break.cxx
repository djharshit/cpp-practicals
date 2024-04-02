#include <stdio.h>

int main() {
   int i, no, s = 0;

   for (i = 1; i <= 4; ++i) {
      printf("Enter a %d: ", i);
      scanf("%d", &no);
      if (no < 0) {
         break;
      }
      s += no; 
   }

   printf("sum = %d", s);

   return 0;
}