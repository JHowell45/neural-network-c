#include "nodes.h"
#include <stdlib.h>

weight_t *new_weight(double value, node_t *n) {
  weight_t *w = malloc(sizeof(weight_t));
  w->value = value;
  w->node = n;
  return w;
}

void free_weight(weight_t *weight) { free(weight); }

weights_t *new_weights(size_t capacity) {}

void free_weights(weights_t *w) {}

void weights_add_weight(weights_t *w, weight_t *item) {}

void weights_remove_weight(weights_t *w, size_t index) {}

node_t *new_node(double value, double bias) {}

void free_node(node_t *node) {}

void node_add_weight(node_t *node, weight_t *weight) {}