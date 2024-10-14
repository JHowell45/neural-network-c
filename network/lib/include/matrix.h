#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include <vector.h>

typedef struct {
  size_t rows;
  size_t columns;
  vector_t **items;
} matrix_t;

matrix_t *new_matrix(size_t rows, size_t cols);
void free_matrix(matrix_t *m);
void display_matrix(matrix_t *m);

void matrix_insert(matrix_t *m, size_t x, size_t y, double value);
matrix_t *matrix_transpose(matrix_t *m);

#endif