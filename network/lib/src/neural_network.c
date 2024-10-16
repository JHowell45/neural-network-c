#include "neural_network.h"
#include "matrix.h"
#include "vector.h"

#include <stdlib.h>

neural_network_t* new_neural_network(size_t inputs_size, size_t outputs_size,
                                     activation_function_t activation_type)
{
    neural_network_t* n = malloc(sizeof(neural_network_t));
    n->inputs = new_vector(inputs_size);
    n->outputs = new_vector(outputs_size);
    n->hidden_layers_count = 10;
    n->hidden_layers = calloc(n->hidden_layers_count, sizeof(vector_t*));
    n->weights = calloc(n->hidden_layers_count + 1, sizeof(matrix_t*));
    return n;
}
void free_neural_network(neural_network_t* network)
{
    if (network->inputs != NULL)
    {
        free_vector(network->inputs);
    }

    if (network->outputs != NULL)
    {
        free_vector(network->outputs);
    }

    if (network->hidden_layers != NULL && network->hidden_layers_count > 0)
    {
        for (int i = 0; i < network->hidden_layers_count; i++)
        {
            free_vector(network->hidden_layers[i]);
        }
    }

    if (network->weights != NULL && network->hidden_layers_count > 1)
    {
        for (int i = 0; i < network->hidden_layers_count; i++)
        {
            free_vector(network->hidden_layers[i]);
        }
    }

    free(network);
}

vector_t* neural_network_inference(neural_network_t* network, vector_t* inputs)
{
    return network->outputs;
}

void neural_network_add_hidden_layer(neural_network_t* network,
                                     size_t neuron_count)
{
}