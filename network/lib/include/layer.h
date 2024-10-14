#ifndef LAYER_H
#define LAYER_H

#include <stdlib.h>

typedef struct {

} layer_t;

layer_t *new_layer(size_t number_of_nodes);
void free_layer(layer_t *l);

#endif