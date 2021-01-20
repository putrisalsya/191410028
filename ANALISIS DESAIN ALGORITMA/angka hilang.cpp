#include <stdio.h>
int main()
{
   int array[100], position, c, n;

   printf("Masukkan jumlah angka :\n");
   scanf("%d", &n);

   printf("Masukkan %d elemen :\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Masukkan angka yang ingin dihilangkan :\n");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Angka tidak bisa dihapus :\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      printf("Array Akhir:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);
   }
	printf("\nAngka yang hilang : %d\n", position);
   return 0;
}
