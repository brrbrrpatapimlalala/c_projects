#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  while (1) {
    int i = rand() % 100000000 + 1;
    printf("%d\n", i);
    usleep(50000);
  }
}
