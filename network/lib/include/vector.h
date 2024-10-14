#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>

typedef struct {
  double *items;
  size_t capacity;
} vector_t;

vector_t *new_vector(size_t capacity);
void free_vector(vector_t *vec);
void display_vector(vector_t *vec);

void vector_insert(vector_t *vec, size_t index, double value);
double vector_get(vector_t *vec, size_t index);

vector_t *vector_add(vector_t *v1, vector_t *v2);

double vector_sum(vector_t *vec);

vector_t *vector_multiply_scalar(vector_t *vec, double scalar);
double vector_multiply_vector(vector_t *vec1, vector_t *vec2);

#endif