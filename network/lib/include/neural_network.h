#ifndef NEURAL_NETWORK_H
#define NEURAL_NETWORK_H

#include "matrix.h"
#include "vector.h"

#include <stdlib.h>

#define DEFAULT_WEIGHTS_SIZE 10

typedef enum
{
    Linear,
    Sigmoid,
    TanH,
    ReLU
} activation_function_t;

typedef struct
{
    vector_t* inputs;
    vector_t* outputs;
    size_t hidden_layers_capacity;
    size_t hidden_layers_count;
    vector_t** hidden_layers;
    matrix_t** weights;
} neural_network_t;

neural_network_t* new_neural_network(size_t inputs_size, size_t outputs_size,
                                     activation_function_t activation_type);
void free_neural_network(neural_network_t* network);

vector_t* neural_network_inference(neural_network_t* network, vector_t* inputs);

void neural_network_add_hidden_layer(neural_network_t* network,
                                     size_t neuron_count);

#endif