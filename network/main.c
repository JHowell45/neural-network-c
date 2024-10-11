#include "vector.h"
#include <stdio.h>

int main(void) {
  vector_t *vec = new_vector(10);
  display_vector(vec);
  printf("\n");
  free_vector(vec);
  return 0;
}