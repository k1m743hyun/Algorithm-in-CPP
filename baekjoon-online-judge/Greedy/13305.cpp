#include <iostream>

int main(void) {
  int n;
  std::cin >> n;

  long distances[n - 1];
  for (int i = 0; i < n - 1; i++) {
    std::cin >> distances[i];
  }

  long prices[n];
  for (int j = 0; j < n; j++) {
    std::cin >> prices[j];
  }

  long minPrice = prices[0];
  long res = 0;

  for (int k = 0; k < n - 1; k++) {
    if (minPrice > prices[k]) {
      minPrice = prices[k];
    }
    res += minPrice * distances[k];
  }

  std::cout << res << std::endl;
}