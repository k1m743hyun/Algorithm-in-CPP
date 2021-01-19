#include <iostream>

int main(void) {
  int n;
  std::cin >> n;
  n = 1000 - n;

  int cashes[6] = {500, 100, 50, 10, 5, 1};

  int count = 0;
  for (int i = 0; i < 6; i++) {
    count += n / cashes[i];
    n = n % cashes[i];
  }

  std::cout << count << std::endl;
}