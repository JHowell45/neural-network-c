#include "unity.h"
#include "vector.h"

void setUp(void) {}

void tearDown(void) {}

static void test_initial_value_is_zero_for_created_vector(void) {
  vector_t *vec = new_vector(3);
  TEST_ASSERT_EQUAL_DOUBLE(vector_get(vec, 0), 0);
  free_vector(vec);
}

static void test_insert_value_to_vector(void) {
  double val = 5.0;
  vector_t *vec = new_vector(3);
  vector_insert(vec, 0, val);
  TEST_ASSERT_EQUAL_DOUBLE(vector_get(vec, 0), val);
  free_vector(vec);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_initial_value_is_zero_for_created_vector);
  RUN_TEST(test_insert_value_to_vector);
  return UNITY_END();
}