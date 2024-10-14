#ifndef NODE_H
#define NODE_H

#include "vector.h"

typedef struct node node_t;
typedef struct weight weight_t;

struct node {
  double value;
  double bias;
  weight_t *weights;
};

struct weight {
  double value;
  node_t *node;
};

node_t *new_node(double value, double bias);
void free_node(node_t *node);

void node_add_weight(node_t *node, weight_t *weight);

weight_t *new_weight(double *value, node_t *n);
void free_weight(weight_t *weight);

#endif