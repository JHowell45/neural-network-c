#include "nodes.h"
#include <stdlib.h>

input_node_t *new_input_node(double value, double weight) {
  input_node_t *n = malloc(sizeof(input_node_t));
  n->value = value;
  n->weight = weight;
  return n;
}

void free_input_node(input_node_t *n) { free(n); }

layer_node_t *new_layer_node(double weight, double bias) {
  layer_node_t *n = malloc(sizeof(layer_node_t));
  n->bias = bias;
  return n;
}

void free_layer_node(layer_node_t *n) { free(n); }

double activation_function(layer_node_t *lnode, vector_t *inputs) {
  return lnode->bias + vector_sum(inputs);
}