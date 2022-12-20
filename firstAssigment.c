#include <stdio.h>
int main() {
   int i, j, uzunluk;
   printf("Uzunluk-1= ");
   scanf("%d", &uzunluk);
   i = 0;
   while(i <= uzunluk) {
    ++i;
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}