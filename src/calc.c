#include <stdio.h>
#include <string.h>

int main() {
  int n1, n2;
  char oper[128];
  printf("Enter first number: ");
  scanf("%d", &n1);
  printf("Enter second number: ");
  scanf("%d", &n2);
  printf("Select operation (+,-,*,/): ");
  scanf("%s", &oper);
  if (strcmp(oper, "+") == 0) {
    printf("%d\n", n1 + n2);
  }
  if (strcmp(oper, "-") == 0) {
    printf("%d\n", n1 - n2);
  }
  if (strcmp(oper, "*") == 0) {
    printf("%d\n", n1 * n2);
  }
  if (strcmp(oper, "/") == 0) {
    printf("%d\n", n1 / n2);
  }
  return 0;
}
