#ifndef HIDDEN_LAYER_H
#define HIDDEN_LAYER_H

typedef struct {
  double bias;
} neuron_t;

neuron_t *new_neuron(double bias);
void free_neuron(neuron_t *n);

typedef struct {
  neuron_t **neurons;
} hidden_layer_t;

hidden_layer_t *new_hidden_layer();
void free_hidden_layer(hidden_layer_t *layer);

#endif