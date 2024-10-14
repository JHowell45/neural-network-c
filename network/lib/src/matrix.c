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

void matrix_insert(matrix_t *m, size_t x, size_t y, double value) {
  vector_insert(m->items[y], x, value);
}

double matrix_get(matrix_t *m, size_t x, size_t y) {
  return vector_get(m->items[y], x);
}

matrix_t *matrix_transpose(matrix_t *m) {
  matrix_t *transposedM = new_matrix(m->columns, m->rows);
  for (int column = 0; column < m->columns; column++) {
    for (int row = 0; row < m->rows; row++) {
      matrix_insert(transposedM, column, row, matrix_get(m, row, column));
    }
  }
  return transposedM;
}

matrix_t *matrix_multiply_scalar(matrix_t *m, double scalar) {
  matrix_t *newM = new_matrix(m->rows, m->columns);
  for (int index = 0; index < m->columns; index++) {
    newM->items[index] = vector_multiply_scalar(m->items[index], scalar);
  }
  return newM;
}
matrix_t *matrix_multiply_vector(matrix_t *m, vector_t *v) {}
matrix_t *matrix_multiply_matrix(matrix_t *m1, matrix_t *m2) {}