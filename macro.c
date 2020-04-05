#include <stdio.h>

#define M_CONST 10
#define M_ADD(x, y) x + y
#define M_RECURSIVE(x) M_ADD(x, M_CONST)

int main() {
  printf("Macro test\n");
  printf("M_CONST: %d\n", M_CONST);
  printf("M_ADD(2, 3): %d\n", M_ADD(2, 3));
  printf("M_RECURSIVE(6): %d\n", M_RECURSIVE(6));

  return 0;
}
