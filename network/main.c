#include <stdio.h>

#include "matrix.h"
#include "neural_network.h"
#include "vector.h"

#define VECTOR_SIZE 10

#define INPUT_SIZE 3
#define OUTPUT_SIZE 1

#define CUSTOM_INPUT_SIZE 10
#define CUSTOM_MAX_HIDDEN_LAYERS 10
#define CUSTOM_OUTPUT_SIZE 5

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

    vector_t* inputs = new_vector(INPUT_SIZE);
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

void custom_neural_network_test()
{
    neural_network_t* network =
        new_neural_network(CUSTOM_INPUT_SIZE, CUSTOM_OUTPUT_SIZE, Sigmoid);
    display_neural_network(network);

    for (int i = 0; i < CUSTOM_MAX_HIDDEN_LAYERS; i++)
    {
        neural_network_add_hidden_layer(network, 20);
        display_neural_network(network);
    }

    display_neural_network(network);

    vector_t* inputs = random_vector(CUSTOM_INPUT_SIZE);
    printf("Inputs:\n");
    display_vector(inputs);
    printf("\n");

    vector_t* outputs = neural_network_inference(network, inputs);
    printf("Outputs:\n");
    display_vector(outputs);
    printf("\n");

    vector_t* softmax_outputs = softmax(outputs);
    printf("SoftMax Outputs:\n");
    display_vector(softmax_outputs);
    printf("\n");

    free_neural_network(network);
    free_vector(inputs);
}

void test_softmax()
{
    double denominator = 0.0;
    vector_t* digits = new_vector(4);
    vector_insert(digits, 0, -1);
    vector_insert(digits, 1, 0);
    vector_insert(digits, 2, 3);
    vector_insert(digits, 3, 5);

    for (int i = 0; i < digits->capacity; i++)
    {
        denominator += exp(vector_get(digits, i));
    }
    printf("Denominator: %.2lf\n", denominator);

    for (int i = 0; i < digits->capacity; i++)
    {
        double digit = vector_get(digits, i);
        printf("Digit: %lf, Softmax: %.3lf\n", digit, exp(digit) / denominator);
    }

    display_vector(softmax(digits));
}

int main(void)
{
    // neural_network_test();
    // advanced_neural_network_test();
    custom_neural_network_test();
    // test_softmax();
    return 0;
}