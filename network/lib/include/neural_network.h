#ifndef NEURAL_NETWORK_H
#define NEURAL_NETWORK_H

#include "matrix.h"
#include "vector.h"

#include <stdlib.h>

#define DEFAULT_SIZE 10

typedef enum
{
    Linear,
    Sigmoid,
    TanH,
    ReLU
} activation_function_t;

typedef struct
{
    size_t inputs_size;
    vector_t* outputs;
    size_t hidden_layers_capacity;
    size_t hidden_layers_count;
    vector_t** hidden_layers;
    size_t weights_capacity;
    size_t weights_count;
    matrix_t** weights;
    activation_function_t activation_function;
} neural_network_t;

neural_network_t* new_neural_network(size_t inputs_size, size_t outputs_size,
                                     activation_function_t activation_type);
void free_neural_network(neural_network_t* network);
void display_neural_network(neural_network_t* network);

vector_t* neural_network_inference(neural_network_t* network, vector_t* inputs);

void neural_network_add_hidden_layer(neural_network_t* network,
                                     size_t neuron_count);

vector_t* neural_network_get_hidden_layer(neural_network_t* network,
                                          size_t index);
matrix_t* neural_network_get_weight(neural_network_t* network, size_t index);

vector_t* softmax(vector_t* vec);

#endif