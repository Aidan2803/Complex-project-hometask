int fact(int a) {
  if (a == 1 || a == 0) {
    return 1;
  } else {
    return a * fact(a - 1);
  }
}