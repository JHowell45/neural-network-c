#include "matrix.h"
#include "unity.h"

#define MATRIX_ROWS 3
#define MATRIX_COLS 3

void setUp(void) {}

void tearDown(void) {}

static void test_initial_value_is_zero_for_created_matrix(void) {
  matrix_t *m = new_matrix(MATRIX_ROWS, MATRIX_COLS);
  for (int i = 0; i < MATRIX_COLS; i++) {
    for (int j = 0; j < MATRIX_ROWS; j++) {
      TEST_ASSERT_EQUAL_DOUBLE(matrix_get(m, i, j), 0.0);
    }
  }
  free_matrix(m);
}

static void test_insert_value_to_matrix(void) {
  size_t row_i = 0;
  size_t col_i = 0;
  double val = 5.0;
  matrix_t *m = new_matrix(MATRIX_ROWS, MATRIX_COLS);
  matrix_insert(m, row_i, col_i, val);
  TEST_ASSERT_EQUAL_DOUBLE(matrix_get(m, row_i, col_i), val);
  free_matrix(m);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_initial_value_is_zero_for_created_matrix);
  RUN_TEST(test_insert_value_to_matrix);
  return UNITY_END();
}