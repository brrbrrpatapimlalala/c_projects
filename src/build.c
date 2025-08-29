#include <stdio.h>
#include <stdlib.h>

int main() {
  puts("building calc");
  system("gcc src/calc.c -o calc --std=c89");
  puts("building akrachamajner");
  system("gcc src/akrachamajner.c -o akrachamajner --std=c89");
  puts("building build");
  system("gcc src/build.c -o build --std=c89");
}
