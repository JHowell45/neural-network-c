#include "matrix.h"
#include <stdio.h>

matrix_t *new_matrix(size_t rows, size_t cols) {
  matrix_t *m = malloc(sizeof(matrix_t));
  m->rows = rows;
  m->columns = cols;
  m->items = calloc(m->columns, sizeof(vector_t *));
  for (register int col = 0; col < m->columns; col++) {
    m->items[col] = new_vector(m->rows);
  }
  return m;
}
void free_matrix(matrix_t *m) {
  for (register int i = 0; i < m->columns; i++) {
    if (m->items[i] != NULL) {
      free_vector(m->items[i]);
    }
  }
  free(m);
}
void display_matrix(matrix_t *m) {
  printf("Matrix {\n");
  printf("\trows: %zu\n", m->rows);
  printf("\tcolumns: %zu\n", m->columns);
  printf("\t[");
  for (int i = 0; i < m->columns; i++) {
    if (i != 0) {
      printf("\t");
    }
    display_vector(m->items[i]);
    if (i == m->columns - 1) {
      printf("]");
    }
    printf("\n");
  }
  printf("\t\n");
  printf("}\n");
}

void matrix_insert(matrix_t *m, size_t x, size_t y, double value) {}