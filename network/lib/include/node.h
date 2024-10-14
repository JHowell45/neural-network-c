#ifndef NODE_H
#define NODE_H

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