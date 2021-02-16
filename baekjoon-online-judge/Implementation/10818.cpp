#include <iostream>

int main(void) {
  int n;
  std::cin >> n;

  int min = 0;
  int max = 0;
  int temp = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> temp;
    if (i == 0) {
      min = temp;
      max = temp;
    }

    else if (temp < min) {
      min = temp;
    }

    else if (temp > max) {
      max = temp;
    }
  }
  std::cout << min << " " << max << "\n";
}