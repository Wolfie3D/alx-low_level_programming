#include <stdio.h>

void times_table() {
  int row, column, result;
  for (row = 0; row <= 9; row++) {
    for (column = 0; column <= 9; column++) {
      result = row * column;
      printf("%2d, ", result);
    }
    printf("\n");
  }
}

int main() {
  times_table();
  return 0;
}
