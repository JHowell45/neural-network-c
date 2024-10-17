#include "neural_network.h"
#include "matrix.h"
#include "vector.h"

#include <stdlib.h>

static void neural_network_add_weight(neural_network_t* network,
                                      size_t input_size, size_t output_size);

neural_network_t* new_neural_network(size_t inputs_size, size_t outputs_size,
                                     activation_function_t activation_type)
{
    neural_network_t* network = malloc(sizeof(neural_network_t));
    network->inputs_size = inputs_size;
    network->outputs = random_vector(outputs_size);

    network->hidden_layers_count = 0;
    network->hidden_layers_capacity = DEFAULT_SIZE;
    network->hidden_layers =
        calloc(network->hidden_layers_capacity, sizeof(vector_t*));

    network->weights_count = 0;
    network->weights_capacity = DEFAULT_SIZE;
    network->weights = calloc(network->weights_capacity, sizeof(matrix_t*));
    neural_network_add_weight(network, inputs_size, outputs_size);
    return network;
}
void free_neural_network(neural_network_t* network)
{
    if (network->outputs != NULL)
    {
        free_vector(network->outputs);
    }
    if (network->hidden_layers != NULL && network->hidden_layers_count > 0)
    {
        for (int i = 0; i < network->hidden_layers_count; i++)
        {
            if (network->hidden_layers[i] != NULL)
            {
                free_vector(network->hidden_layers[i]);
            }
        }
        free(network->hidden_layers);
    }

    if (network->weights != NULL && network->hidden_layers_count > 1)
    {
        for (int i = 0; i < network->hidden_layers_count + 1; i++)
        {
            if (network->weights[i] != NULL)
            {
                free_matrix(network->weights[i]);
            }
        }
        free(network->weights);
    }

    free(network);
}

vector_t* neural_network_inference(neural_network_t* network, vector_t* inputs)
{
    vector_t* results = matrix_multiply_vector(network->weights[0], inputs);
    vector_add(results, network->outputs);
    return results;
}

static void neural_network_add_weight(neural_network_t* network,
                                      size_t input_size, size_t output_size)
{
    if (network->weights_count >= network->weights_capacity)
    {
        network->weights_capacity += 5;
        network->hidden_layers =
            realloc(network->weights, network->weights_capacity);
    }
    network->weights[network->weights_count] =
        random_matrix(input_size, output_size);
    network->weights_count++;
}

void neural_network_add_hidden_layer(neural_network_t* network,
                                     size_t neuron_count)
{
    if (network->hidden_layers_count >= network->hidden_layers_capacity)
    {
        network->hidden_layers_capacity += 5;
        network->hidden_layers =
            realloc(network->hidden_layers, network->hidden_layers_capacity);
    }
    network->hidden_layers[network->hidden_layers_count] =
        random_vector(neuron_count);
    network->hidden_layers_count++;
}