#include <iostream>

int main(void) {
  int n;
  std::cin >> n;

  for (int i = 1; i < n + 1; i++) {
    for (int j = 0; j < i; j++) {
      std::cout << "*";
    }
    std::cout << "\n";
  }
}