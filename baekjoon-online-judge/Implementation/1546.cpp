#include <iostream>

int main(void) {
  int n;
  std::cin >> n;

  double max = 0;
  double li[n];
  for (int i = 0; i < n; i++) {
    std::cin >> li[i];
    if (li[i] > max) {
      max = li[i];
    }
  }

  double sum = 0;
  for (int j = 0; j < n; j++) {
    sum += li[j] / max * 100;
  }

  std::cout << sum / n << "\n";
}