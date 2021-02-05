#include <iostream>

int main(void) {
  int n;
  std::cin >> n;

  int results[n];

  int a, b;
  for (int i = 0; i < n; i++) {
    std::cin >> a >> b;
    results[i] = a + b;
  }

  for (int j = 0; j < n; j++) {
    std::cout << results[j] << std::endl;
  }
}