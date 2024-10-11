#include "vector.h"
#include <stdlib.h>

vector_t *new_vector(size_t capacity) {
  vector_t *vec = malloc(sizeof(vector_t));
  vec->capacity = capacity;
  vec->size = 0;
  vec->items = calloc(vec->capacity, sizeof(double));
  return vec;
}
void free_vector(vector_t *vec) {
  if (vec->items != NULL) {
    free(vec->items);
  }
  free(vec);
}
void display_vector(vector_t *vec) {}

void vector_insert(vector_t *vec, size_t index, double value) {}