#include "macro.h"

#include <stdio.h>

M_FUNC_DEF(print_number, int n) {
  printf("[%d]\n", n);
}
