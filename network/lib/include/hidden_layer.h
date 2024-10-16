#ifndef HIDDEN_LAYER_H
#define HIDDEN_LAYER_H

#include "weights.h"
#include <stdlib.h>

enum AcitvationFunction { Linear, Sigmoid, TanH, ReLU };
typedef struct {
  double value;
  double bias;
} neuron_t;

neuron_t *new_neuron(double bias);
void free_neuron(neuron_t *n);

double neuron_activation_function(neuron_t *neuron, weights_t **weights,
                                  AcitvationFunction function_type);

typedef struct {
  neuron_t **neurons;
} hidden_layer_t;

hidden_layer_t *new_hidden_layer(size_t number_of_neurons);
void free_hidden_layer(hidden_layer_t *layer);

#endif