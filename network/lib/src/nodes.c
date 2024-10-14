#include "nodes.h"
#include <stdlib.h>

weight_t *new_weight(double value, node_t *n) {
  weight_t *w = malloc(sizeof(weight_t));
  w->value = value;
  w->node = n;
  return w;
}

void free_weight(weight_t *weight) { free(weight); }

weights_t *new_weights(size_t capacity) {
  weights_t *w = malloc(sizeof(weights_t));
  w->capacity = capacity;
  w->size = 0;
  w->items = calloc(w->capacity, sizeof(weight_t *));
  return w;
}

void free_weights(weights_t *w) {
  free(w->items);
  free(w);
}

static void increase_weight_capacity(weights_t *w) {
  w->capacity += 5;
  w->items = realloc(w->items, w->capacity);
}

void weights_add_weight(weights_t *w, weight_t *item) {
  if (w->size >= w->capacity) {
    increase_weight_capacity(w);
  }
  w->items[w->size] = item;
  w->size++;
}

void weights_remove_weight(weights_t *w, size_t index) {
  w->size--;
  free_node(w->items[w->size]);
  w->items[w->size] = NULL;
}

node_t *new_node(double value, double bias) {}

void free_node(node_t *node) {}

void node_add_weight(node_t *node, weight_t *weight) {}