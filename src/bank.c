#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int p;
int usleep(int ms);

int main() {
  puts("Взлом банка...");
  while (1) {
    printf("%d\n", ++p);
    printf("\x1b[1F");
    usleep(1000000);
    if (p == 10) {
      puts("Банк успешно взломан");
      break;
    }
  }
  return 0;
}
