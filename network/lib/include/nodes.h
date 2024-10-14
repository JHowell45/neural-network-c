#ifndef NODE_H
#define NODE_H

#include "vector.h"

typedef struct node node_t;
typedef struct weight weight_t;
typedef struct weights weights_t;

struct weight {
  double value;
  node_t *node;
};

struct weights {
  size_t capacity;
  size_t size;
  weight_t *items;
};

struct node {
  double value;
  double bias;
  weights_t *weights;
};

weight_t *new_weight(double *value, node_t *n);
void free_weight(weight_t *weight);

weights_t *new_weights(size_t capacity);
void free_weights(weights_t *w);

void weights_add_weight(weights_t *w, weight_t *item);
void weights_remove_weight(weights_t *w, size_t index);

node_t *new_node(double value, double bias);
void free_node(node_t *node);

void node_add_weight(node_t *node, weight_t *weight);

#endif