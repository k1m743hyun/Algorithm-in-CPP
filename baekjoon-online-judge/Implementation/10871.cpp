#include <iostream>

int main(void) {
  int n, x;
  std::cin >> n >> x;

  int a;
  for (int i = 0; i < n; i++) {
    std::cin >> a;
    if (a < x) {
      std::cout << a << " ";
    }
  }
}