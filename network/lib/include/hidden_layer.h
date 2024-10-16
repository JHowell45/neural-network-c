#ifndef HIDDEN_LAYER_H
#define HIDDEN_LAYER_H

#include "weights.h"
#include <stdlib.h>

typedef enum { Linear, Sigmoid, TanH, ReLU } activation_function_t;

typedef struct {
  double value;
  double bias;
  weight_t **weights;
} neuron_t;

neuron_t *new_neuron(double bias);
void free_neuron(neuron_t *n);

double neuron_activation_function(neuron_t *neuron, weight_t **weights,
                                  activation_function_t function_type);

typedef struct {
  neuron_t **neurons;
} hidden_layer_t;

hidden_layer_t *new_hidden_layer(size_t number_of_neurons);
void free_hidden_layer(hidden_layer_t *layer);

#endif