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
    n->hidden_layers_count = 0;
    n->hidden_layers = calloc(DEFAULT_WEIGHTS_SIZE, sizeof(vector_t*));
    n->weights = calloc(n->hidden_layers_count + 1, sizeof(matrix_t*));
    n->weights[0] = random_matrix(inputs_size, outputs_size);
    return n;
}
void free_neural_network(neural_network_t* network)
{
    if (network->inputs != NULL)
    {
        free_vector(network->inputs);
    }

    // if (network->outputs != NULL)
    // {
    //     free_vector(network->outputs);
    // }

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

    return network->outputs;
}

void neural_network_add_hidden_layer(neural_network_t* network,
                                     size_t neuron_count)
{
}