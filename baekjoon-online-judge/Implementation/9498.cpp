#include <iostream>

int main(void) {
  int score;
  std::cin >> score;

  if (score > 89) {
    std::cout << "A" << std::endl;
  }
  else if (score > 79) {
    std::cout << "B" << std::endl;
  }
  else if (score > 69) {
    std::cout << "C" << std::endl;
  }
  else if(score > 59) {
    std::cout << "D" << std::endl;
  }
  else {
    std::cout << "F" << std::endl;
  }
}