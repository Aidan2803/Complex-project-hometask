#include <stdbool.h>
#include <stdio.h>

void getValues(int *values) {
  printf("Enter first number:\n");
  scanf("%d", &values[0]);

  printf("Enter second number:\n");
  scanf("%d", &values[1]);
}

int getSingleValue() {
  int value = 0;
  printf("Enter value:\n");
  scanf("%d", &value);
  return value;
}

int main() {
  bool exit_program = false;
  int *values = (int *)malloc(sizeof(int) * 2);

  if (values == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }

  while (!exit_program) {
    char op;
    printf("Enter operation\n  a - add\n  d - diff\n  p - product\n  f - "
           "fraction\n  c - factorial\n  s - squear root\n  e - exit\n");
    scanf(" %c", &op);
    switch (op) {
    case 'a':
      getValues(values);
      printf("Sum: %d\n", sum(values[0], values[1]));
      break;
    case 'd':
      getValues(values);
      printf("Diff: %d\n", diff(values[0], values[1]));
      break;
    case 'p':
      getValues(values);
      printf("Prod: %d\n", prod(values[0], values[1]));
      break;
    case 'f':
      getValues(values);
      printf("Frac: %d\n", frac(values[0], values[1]));
      break;
    case 'c':
      printf("Fact: %d\n", fact(getSingleValue()));
      break;
    case 's':
      printf("Sroot: %d\n", sroot(getSingleValue()));
      break;
    case 'e':
      printf("Exiting...\n");
      free(values);
      exit(0);
      break;
    default:
      printf("No such operation\n");
      break;
    }
  }
}