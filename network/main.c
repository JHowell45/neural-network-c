#include "matrix.h"
#include "vector.h"
#include <stdio.h>

#define MATRIX_WIDTH 3
#define MATRIX_HEIGHT 4

void vector_test() {
  vector_t *vec = new_vector(10);
  display_vector(vec);
  printf("\n");
  free_vector(vec);
}

void matrix_test() {
  matrix_t *m = new_matrix(MATRIX_WIDTH, MATRIX_HEIGHT);
  display_matrix(m);
  int value = 1;
  printf("MATRIX_WIDTH: %d\n", MATRIX_WIDTH);
  printf("MATRIX_HEIGHT: %d\n", MATRIX_HEIGHT);
  for (int column = 0; column < MATRIX_WIDTH; column++) {
    for (int row = 0; row < MATRIX_HEIGHT; row++) {
      matrix_insert(m, column, row, value);
      value++;
    }
  }
  display_matrix(m);

  matrix_t *tM = matrix_transpose(m);
  display_matrix(tM);

  free_matrix(m);
  free_matrix(tM);
}

int main(void) {
  matrix_test();
  return 0;
}