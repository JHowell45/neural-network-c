#include "vector.h"
#include <stdio.h>
#include <stdlib.h>

vector_t *new_vector(size_t capacity) {
  vector_t *vec = malloc(sizeof(vector_t));
  vec->capacity = capacity;
  vec->size = capacity;
  vec->items = calloc(vec->capacity, sizeof(double));
  return vec;
}
void free_vector(vector_t *vec) {
  if (vec->items != NULL) {
    free(vec->items);
  }
  free(vec);
}
void display_vector(vector_t *vec) {
  printf("[");
  for (register int i = 0; i < vec->size; i++) {
    if (i == 0) {
      printf("%f", vec->items[i]);
    } else {
      printf(", %f", vec->items[i]);
    }
  }
  printf("]");
}

void vector_insert(vector_t *vec, size_t index, double value) {
  vec->items[index] = value;
}

double vector_get(vector_t *vec, size_t index) { return vec->items[index]; }