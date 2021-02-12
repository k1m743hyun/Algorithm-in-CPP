#include <iostream>

int main(void) {
  int n;
  std::cin >> n;

  int a, b;
  for (int i = 1; i < n + 1; i++) {
    std::cin >> a >> b;
    std::cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
  }
}