#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int read_int() {
  int i;
  read(0, &i, sizeof(i));
  return i;
}

void do_something(int n) {
  printf("%d\n", n + 2);
}

void test1() {
  int n;
  scanf("%d", &n);
  printf("%d\n", n);
  do_something(n);
}

void test2() {
  int n;
  n = read_int();
  printf("%d\n", n);
  do_something(n);
}

int main() {
  test1();
  test2();
  return 0;
}
