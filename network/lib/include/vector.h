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

#endif