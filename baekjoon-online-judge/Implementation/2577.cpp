#include <iostream>
#include <string>

int main(void) {
  int a, b, c;
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;

  std::string strNum = std::to_string(a * b * c);

  for (int i = 0; i < 10; i++) {
    int count = 0;
    int temp = std::stoi(strNum);
    for (int j = strNum.length(); j > 0; j--) {
      if (temp % 10 == i) {
        count++;
      }
      temp /= 10;
    }
    std::cout << count << "\n";
  }
}