#include <stdio.h>
#include <stdbool.h>

int main(){
  char c = 97;
  char d = 10;
  printf("%c \n", c + d);
  printf("%i \n", 9 * 10);
  printf("%i \n", 90 / 10);
  printf("%i \n", 92 % 10);
  printf("%d \n", true & true);
  printf("%d \n", false & true);
  printf("%d \n", false | true);
  printf("%d \n", false | false);
  printf("%d \n", true && true);
  printf("%d \n", false && true);
  printf("%d \n", false || true);
  printf("%d \n", false || false);

  c += d;
  printf("%c \n", c);
  printf("%i \n", d);
  printf("%d \n", c==107? true : false);
  printf("%i \n", 10 + 10 / 2);
  return 0;
}
