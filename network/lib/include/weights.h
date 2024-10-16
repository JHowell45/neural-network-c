#ifndef WEIGHTS_H
#define WEIGHTS_H

typedef struct {
  void *node_from;
  void *node_to;
  double weight;
} weight_t;

weight_t *new_weight();

#endif