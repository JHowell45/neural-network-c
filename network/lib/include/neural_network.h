#ifndef NEURAL_NETWORK_H
#define NEURAL_NETWORK_H

#include "matrix.h"
#include "vector.h"

#include <stdlib.h>

typedef struct {
  vector_t *inputs;
  vector_t *outputs;
  vector_t **hidden_layers;
  matrix_t **weights;
} neural_network_t;

neural_network_t *new_neural_network();
void free_neural_network();

#endif