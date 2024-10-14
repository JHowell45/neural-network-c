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

#endif