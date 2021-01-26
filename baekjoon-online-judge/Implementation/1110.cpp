#include <iostream>

int main(void) {
  int n;
  std::cin >> n;
  int cmp = n;

  int count = 0;
  do {
    n = ((n % 10)) * 10 + ((n / 10) + (n % 10)) % 10;
    count++;
  }
  while (n != cmp);

  std::cout << count << std::endl;
}