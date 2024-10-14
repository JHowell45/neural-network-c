#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>

typedef struct {
  double *items;
  size_t capacity;
  size_t size;
} vector_t;

vector_t *new_vector(size_t capacity);
void free_vector(vector_t *vec);
void display_vector(vector_t *vec);

void vector_insert(vector_t *vec, size_t index, double value);
double vector_get(vector_t *vec, size_t index);

void vector_multiply_scalar(vector_t *vec, double scalar);
void vector_multiply_vector(vector_t *vec1, vector_t *vec2);

#endif