#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;
    
    int cash[n];
    for (int i = 0; i < n; i++) {
        std::cin >> cash[i];
    }
    
    int result = 0;
    for (int j = n - 1; j >= 0; j--){
        result += k / cash[j];
        k = k % cash[j];
    }
    
    std::cout << result << std::endl;
    return 0;
}