#include "vector.h"
#include <stdio.h>
#include <stdlib.h>

vector_t* new_vector(size_t capacity)
{
    vector_t* vec = malloc(sizeof(vector_t));
    vec->capacity = capacity;
    vec->items = calloc(vec->capacity, sizeof(double));
    return vec;
}

vector_t* random_vector(size_t capacity)
{
    vector_t* vec = new_vector(capacity);
    for (int i = 0; i < vec->capacity; i++)
    {
        vec->items[i] = (double)rand() / (double)RAND_MAX;
    }
    return vec;
}

void free_vector(vector_t* vec)
{
    if (vec->items != NULL)
    {
        free(vec->items);
    }
    free(vec);
}

void display_vector(vector_t* vec)
{
    printf("[");
    for (register int i = 0; i < vec->capacity; i++)
    {
        if (i == 0)
        {
            printf("%f", vec->items[i]);
        }
        else
        {
            printf(", %f", vec->items[i]);
        }
    }
    printf("]");
}

void vector_insert(vector_t* vec, size_t index, double value)
{
    vec->items[index] = value;
}

double vector_get(vector_t* vec, size_t index) { return vec->items[index]; }

vector_t* vector_add(vector_t* v1, vector_t* v2)
{
    if (v1->capacity != v2->capacity)
    {
        return NULL;
    }
    vector_t* summedVec = new_vector(v1->capacity);
    for (int i = 0; i < v1->capacity; i++)
    {
        vector_insert(summedVec, i, v1->items[i] + v2->items[i]);
    }
    return summedVec;
}

double vector_sum(vector_t* vec)
{
    double sum = 0.0;
    for (int i = 0; i < vec->capacity; i++)
    {
        sum += vec->items[i];
    }
    return sum;
}

vector_t* vector_multiply_scalar(vector_t* vec, double scalar)
{
    vector_t* newVec = new_vector(vec->capacity);
    for (int index = 0; index < vec->capacity; index++)
    {
        newVec->items[index] = vec->items[index] * scalar;
    }
    return newVec;
}

double vector_multiply_vector(vector_t* vec1, vector_t* vec2)
{
    if (vec1->capacity != vec2->capacity)
    {
        exit(1);
    }
    double sum = 0.0;
    for (int i = 0; i < vec1->capacity; i++)
    {
        sum += vec1->items[i] * vec2->items[i];
    }
    return sum;
}