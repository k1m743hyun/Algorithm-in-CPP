#include <iostream>

int main(void) {
  int n;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int total;
    std::cin >> total;
    int scores[total];
    int sum = 0;
    for (int j = 0; j < total; j++) {
      std::cin >> scores[j];
      sum += scores[j];
    }
    double avg = (double)sum / (double)total;
    int cnt = 0;
    for (int k = 0; k < total; k++) {
      if (scores[k] > avg) {
        cnt++;
      }
    }
    printf("%.3f%%\n", ((double)cnt / (double)total * 100));
  }
}