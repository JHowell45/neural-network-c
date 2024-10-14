#include "vector.h"
#include <stdio.h>
#include <stdlib.h>

vector_t *new_vector(size_t capacity) {
  vector_t *vec = malloc(sizeof(vector_t));
  vec->capacity = capacity;
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
  for (register int i = 0; i < vec->capacity; i++) {
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

vector_t *vector_multiply_scalar(vector_t *vec, double scalar) {
  vector_t *newVec = new_vector(vec->capacity);
  for (int index = 0; index < vec->capacity; index++) {
    newVec->items[index] = vec->items[index] * scalar;
  }
  return newVec;
}

double *vector_multiply_vector(vector_t *vec1, vector_t *vec2) {
  if (vec1->capacity != vec2->capacity) {
    return NULL;
  }
  double sum = 0.0;
  for (int i = 0; i < vec1->capacity; i++) {
    sum += vec1->items[i] * vec2->items[i];
  }
  return &sum;
}