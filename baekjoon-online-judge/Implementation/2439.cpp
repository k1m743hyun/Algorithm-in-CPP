#include <iostream>

int main(void) {
  int n;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = n - (i + 1); j > 0; j--) {
      std::cout << " ";
    }

    for (int k = 0; k < (i + 1); k++) {
      std::cout << "*";
    }

    std::cout << "\n";
  }
}