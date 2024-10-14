#ifndef NODE_H
#define NODE_H

#include "vector.h"

typedef struct {
  double value;
  double weight;
} input_node_t;

typedef struct {
  double bias;
} layer_node_t;

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

input_node_t *new_input_node(double value, double weight);
void free_input_node(input_node_t *n);

layer_node_t *new_layer_node(double weight, double bias);
void free_layer_node(layer_node_t *n);

double activation_function(layer_node_t *lnode, vector_t *inputs);

#endif