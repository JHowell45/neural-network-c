#include <stdio.h>

#include "matrix.h"
#include "neural_network.h"
#include "vector.h"

#define VECTOR_SIZE 10

#define INPUT_SIZE 3
#define OUTPUT_SIZE 1

void neural_network_test()
{
    neural_network_t* network =
        new_neural_network(INPUT_SIZE, OUTPUT_SIZE, Linear);

    vector_t* inputs = new_vector(3);
    for (int i = 0; i < 3; i++)
    {
        vector_insert(inputs, i, i + 1);
    }
    display_vector(inputs);
    printf("\n");

    matrix_t* weights = neural_network_get_weight(network, 0);
    vector_t* col = matrix_get_column(weights, 0);
    vector_insert(col, 0, -0.01);
    vector_insert(col, 1, 0.49);
    vector_insert(col, 2, 0.14);
    display_matrix(weights);
    vector_insert(network->outputs, 0, 0.75);

    vector_t* outputs = neural_network_inference(network, inputs);
    display_vector(outputs);
    printf("\n");

    free_neural_network(network);
    free_vector(inputs);
    free_vector(outputs);
}

void advanced_neural_network_test()
{
    neural_network_t* network =
        new_neural_network(INPUT_SIZE, OUTPUT_SIZE, Linear);
    display_neural_network(network);

    vector_t* inputs = new_vector(3);
    for (int i = 0; i < 3; i++)
    {
        vector_insert(inputs, i, i + 1);
    }
    display_vector(inputs);
    printf("\n");

    neural_network_add_hidden_layer(network, 4);

    display_neural_network(network);

    free_neural_network(network);
    free_vector(inputs);
}

int main(void)
{
    // neural_network_test();
    advanced_neural_network_test();
    return 0;
}