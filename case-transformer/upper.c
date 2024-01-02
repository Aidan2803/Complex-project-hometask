#include <stdio.h>
#include "converter.h"
const int BUFFER_SIZE = 100;

int main() {
  char str[BUFFER_SIZE];
  printf("Please enter your string:");
  scanf("%s", str);

  upper(str, BUFFER_SIZE);

  printf("%s\n", str);
}