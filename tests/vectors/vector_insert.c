#include "unity.h"
#include "vector.h"

void setUp(void) {}

void tearDown(void) {}

static void test_insert_value_to_vector(void) {
  vector_t *vec = new_vector(3);
  TEST_ASSERT_EQUAL_INT(vector_get(vec, 0), 0);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_insert_value_to_vector);
  return UNITY_END();
}