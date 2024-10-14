#ifndef NODE_H
#define NODE_H

#include "vector.h"

typedef struct {
  double value;
} io_node_t;

typedef struct {
  double weight;
  double bias;
} layer_node_t;

#endif

io_node_t *new_input_node(double value);
void free_input_node(io_node_t *n);

layer_node_t *new_layer_node(double weight, double bias);
void free_layer_node(layer_node_t *n);

double activation_function(layer_node_t *lnode, vector_t *inputs);