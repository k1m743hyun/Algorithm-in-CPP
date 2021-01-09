#include <iostream>
#include <algorithm>

int main(void) {
  int n;
  std::cin >> n;

  int times[n];
  for (int i = 0; i < n; i++) {
    std::cin >> times[i];
  }

  int result = 0;
  int temp = 0;

  std::sort(times, times + n);

  for (int j = 0; j < n; j++) {
    temp += times[j];
    result += temp;
  }
  
  std::cout << result << std::endl;
}