#include "hidden_layer.h"
#include <stdlib.h>

neuron_t *new_neuron(double bias) {
  neuron_t *neuron = malloc(sizeof(neuron_t));
  neuron->value = 0.0;
  neuron->bias = bias;
  return neuron;
}
void free_neuron(neuron_t *n) {
  if (n->weights != NULL) {
    free(n->weights);
  }
  free(n);
}

double static linear_function() {}
double static sigmoid_function() {}
double static tanh_function() {}
double static relu_function() {}

double neuron_activation_function(neuron_t *neuron, weight_t **weights,
                                  activation_function_t function_type) {
  switch (function_type) {
  case Linear:
    return linear_function();
    break;
  case Sigmoid:
    return sigmoid_function();
    break;
  case TanH:
    return tanh_function();
    break;
  case ReLU:
    return relu_function();
    break;
  }
}