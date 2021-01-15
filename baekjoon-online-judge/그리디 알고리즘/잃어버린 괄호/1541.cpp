#include <iostream>
#include <cstring>
#include <string>

int main(void) {
  char input[51];
  std::cin >> input;

  int result = 0;
  char *ptr = std::strtok(input, "-");

  char front[51];
  std::strcpy(front, ptr);
  
  if (ptr = std::strtok(NULL, "")) {
    char back[51];
    std::strcpy(back, ptr);
  
    char *ptrb = std::strtok(back, "+-");
    do {
      result -= std::stoi(ptrb);
    }
    while (ptrb = std::strtok(NULL, "+-"));
  }

  char *ptrf = std::strtok(front, "+");
  do {
    result += std::stoi(ptrf);
  } while (ptrf = std::strtok(NULL, "+"));

  std::cout << result << std::endl;
}