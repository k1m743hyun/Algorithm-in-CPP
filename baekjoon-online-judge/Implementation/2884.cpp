#include <iostream>

int main(void) {
  int H, M;
  std::cin >> H >> M;

  if (M < 45) {
    if (H == 0) {
      printf("%d %d\n", 23, M + 15);
    }

    else {
      printf("%d %d\n", H - 1, M + 15);
    }
  }

  else {
    printf("%d %d\n", H, M - 45);
  }
}