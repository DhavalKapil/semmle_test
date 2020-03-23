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
  /*
    exists (Call c|
      c.getTarget().getName().matches("%scanf%") and
      c.getAnArgument() = node.(DataFlow::DefinitionByReferenceNode).getArgument()
    )
  */
  scanf("%d", &n);
  printf("%d\n", n);
  do_something(n);
}

void test2() {
  int n;
  /*
    node.asExpr().(Call).getTarget().getName().matches("read_int")
   */
  n = read_int();
  printf("%d\n", n);
  do_something(n);
}

int main() {
  test1();
  test2();
  return 0;
}
