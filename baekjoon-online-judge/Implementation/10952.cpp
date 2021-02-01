#include <iostream>

int main(void) {
  int a, b;

  do {
    std::cin >> a >> b;

    if (a + b == 0) {
      break;
    }

    std::cout << a + b << std::endl;
  } while (1);
}