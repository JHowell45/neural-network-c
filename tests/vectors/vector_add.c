#include "unity.h"
#include "vector.h"

#define VECTOR_SIZE 3

void setUp(void) {}

void tearDown(void) {}

static void test_vector_add(void) {
  vector_t *vec1 = new_vector(VECTOR_SIZE);
  vector_t *vec2 = new_vector(VECTOR_SIZE);
  for (int i = 0; i < vec1->capacity; i++) {
    vector_insert(vec1, i, i + 1);
    vector_insert(vec2, i, i + 1);
  }
  vector_t *vec3 = vector_add(vec1, vec2);
  vector_t *expected = new_vector(VECTOR_SIZE);
  for (int i = 0; i < expected->capacity; i++) {
    vector_insert(expected, i, 2 * (i + 1));
  }
  TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, vec3, VECTOR_SIZE);
  free_vector(vec1);
  free_vector(vec2);
  free_vector(vec3);
  free_vector(expected);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_vector_add);
  return UNITY_END();
}