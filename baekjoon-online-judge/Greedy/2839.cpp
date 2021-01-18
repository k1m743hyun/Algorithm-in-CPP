#include <iostream>

void calculator(int*, int*, int);

int main(void) {
  int n;
  std::cin >> n;

  int res = 0;
  calculator(&n, &res, 5);

  if (n == 0) {
    std::cout << res << std::endl;
  }

  else {
    if (res > 0 && (n % 3) == 1) {
      n = n + 5;
      res = res - 1;
      calculator(&n, &res, 3);
      std::cout << res << std::endl;
    }

    else if (res > 1 && (n % 3) == 2) {
      n = n + 10;
      res = res - 2;
      calculator(&n, &res, 3);
      std::cout << res << std::endl;
    }

    else {
      calculator(&n, &res, 3);
      if (n == 0) {
        std::cout << res << std::endl;
      }

      else {
        std::cout << -1 << std::endl;
      }
    }
  }
}

void calculator(int *n, int *res, int i) {
  *res += *n / i;
  *n = *n % i;
}