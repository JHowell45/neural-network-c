#ifndef MATRIX_H
#define MATRIX_H

#include "vector.h"
#include <stdlib.h>

#define DEFAULT_WEIGHTS_SIZE 10

typedef struct
{
    size_t rows;
    size_t columns;
    vector_t** items;
} matrix_t;

matrix_t* new_matrix(size_t rows, size_t cols);
matrix_t* random_matrix(size_t rows, size_t cols);
void free_matrix(matrix_t* m);
void display_matrix(matrix_t* m);

void matrix_insert(matrix_t* m, size_t x, size_t y, double value);
double matrix_get(matrix_t* m, size_t x, size_t y);
vector_t* matrix_get_row(matrix_t* m, size_t row);
vector_t* matrix_get_column(matrix_t* m, size_t column);
matrix_t* matrix_transpose(matrix_t* m);

matrix_t* matrix_multiply_scalar(matrix_t* m, double scalar);
vector_t* matrix_multiply_vector(matrix_t* m, vector_t* v);
matrix_t* matrix_multiply_matrix(matrix_t* m1, matrix_t* m2);

#endif