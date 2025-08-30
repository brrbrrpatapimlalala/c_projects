#include <stdio.h>
#include <stdlib.h>

int main() {
  puts("building calc");
  system("gcc src/calc.c -o calc --std=c99");
  puts("building akrachamajner");
  system("gcc src/akrachamajner.c -o akrachamajner --std=c99");
  puts("building build");
  system("gcc src/build.c -o build --std=c99");
  puts("building bank");
  system("gcc src/bank.c -o bank --std=c99");
}
