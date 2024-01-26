#include <stdio.h>

int main() {

  int angka[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int i, count = 0;

  for(i=0; i<9; i++) {
    if(angka[i] % 2 != 0) {
      count++;
    }
  }

  printf("Jumlah bilangan ganjil dalam array adalah %d\n", count);
  
  return 0;
}
