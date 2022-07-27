#include <stddef.h>

size_t number_of_rectangles(size_t m, size_t n) {
  return m*n*(m+1)*(n+1)/4;
}
