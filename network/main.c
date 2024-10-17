#include <stdio.h>

#include "matrix.h"
#include "neural_network.h"
#include "vector.h"

#define VECTOR_SIZE 10

#define MATRIX_WIDTH 3
#define MATRIX_HEIGHT 4

void vector_test()
{
    vector_t* vec = new_vector(VECTOR_SIZE);
    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        vector_insert(vec, i, i + 1);
    }
    display_vector(vec);
    printf("\n");

    vector_t* vec2 = vector_multiply_scalar(vec, 5);
    display_vector(vec2);
    printf("\n");

    double value = vector_multiply_vector(vec, vec2);
    printf("Multiply both vectors above: %f\n", value);

    free_vector(vec);
    free_vector(vec2);
}

void matrix_test()
{
    matrix_t* m = new_matrix(MATRIX_WIDTH, MATRIX_HEIGHT);
    display_matrix(m);
    int value = 1;
    printf("MATRIX_WIDTH: %d\n", MATRIX_WIDTH);
    printf("MATRIX_HEIGHT: %d\n", MATRIX_HEIGHT);
    for (int column = 0; column < MATRIX_WIDTH; column++)
    {
        for (int row = 0; row < MATRIX_HEIGHT; row++)
        {
            matrix_insert(m, column, row, value);
            value++;
        }
    }
    display_matrix(m);

    matrix_t* tM = matrix_transpose(m);
    display_matrix(tM);

    free_matrix(m);
    free_matrix(tM);
}

void neural_network_test()
{
    neural_network_t* network = new_neural_network(3, 1, Linear);

    vector_t* inputs = new_vector(3);
    for (int i = 0; i < 3; i++)
    {
        vector_insert(inputs, i, i + 1);
    }
    display_vector(inputs);
    printf("\n");

    display_matrix(network->weights[0]);
    matrix_t* weights = neural_network_get_weight(network, 0);
    display_matrix(weights);

    vector_t* outputs = neural_network_inference(network, inputs);
    display_vector(outputs);
    printf("\n");

    free_neural_network(network);
    free_vector(inputs);
    free_vector(outputs);
}

int main(void)
{
    //   vector_test();
    //   matrix_test();
    neural_network_test();
    return 0;
}