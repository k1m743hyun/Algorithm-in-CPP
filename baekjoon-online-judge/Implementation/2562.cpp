#include <iostream>

int main(void) {
  int max = 0;
  int index = 0;
  int temp = 0;
  for (int i = 0; i < 9; i++) {
    std::cin >> temp;
    if (i == 0 || temp > max) {
      max = temp;
      index = i;
    }
  }
  std::cout << max << "\n" << index + 1 << "\n";
}