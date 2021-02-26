#include <iostream>
#include <string>

int main(void) {
  int n;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int res = 0;
    int continuous = 0;

    std::string answer;
    std::cin >> answer;
    for (int j = 0; j < answer.length(); j++) {
      if (answer[j] == 'O') {
        continuous += 1;
      }
      else {
        continuous = 0;
      }
      res += continuous;
    }
    std::cout << res << "\n";
  }
}