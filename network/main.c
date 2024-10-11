#include "matrix.h"
#include "vector.h"
#include <stdio.h>

void vector_test() {
  vector_t *vec = new_vector(10);
  display_vector(vec);
  printf("\n");
  free_vector(vec);
}

void matrix_test() {
  matrix_t *m = new_matrix(2, 2);
  display_matrix(m);
  free_matrix(m);
  return 0;
}

int main(void) {
  matrix_test();
  return 0;
}