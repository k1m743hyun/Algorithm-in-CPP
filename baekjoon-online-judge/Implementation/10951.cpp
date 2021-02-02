#include <iostream>

int main(void) {
  int a, b;
  while (1) {
    std::cin >> a >> b;
    if (std::cin.eof() == true) {
      break;
    }
    std::cout << a + b << std::endl;
  }
}