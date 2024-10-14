#include "nodes.h"
#include <stdlib.h>

io_node_t *new_input_node(double value) {
  io_node_t *n = malloc(sizeof(io_node_t));
  n->value = value;
  return n;
}

void free_input_node(io_node_t *n) { free(n); }

layer_node_t *new_layer_node(double weight, double bias) {
  layer_node_t *n = malloc(sizeof(layer_node_t));
  n->weight = weight;
  n->bias = bias;
  return n;
}

void free_layer_node(layer_node_t *n) { free(n); }

double activation_function(layer_node_t *lnode, vector_t *inputs) {}