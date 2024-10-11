#include "vector.h"

int main(void) {
  vector_t *vec = new_vector(10);
  free_vector(vec);
  return 0;
}