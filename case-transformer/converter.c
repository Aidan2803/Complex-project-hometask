#include <stdio.h>

void lower(char *string, int n) {
  for (int i = 0; i < n; i++) {
    if (string[i] >= 65 && string[i] <= 90) {
      if (string[i] != '\0') {
        string[i] += 32;
      }
    }
  }
}

void upper(char *string, int n) {
  for (int i = 0; i < n; i++) {
    if (string[i] >= 97 && string[i] <= 122) {
      if (string[i] != '\0') {
        string[i] -= 32;
      }
    }
  }
}