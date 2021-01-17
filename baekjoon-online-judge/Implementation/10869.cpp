#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    printf("%d\n%d\n%d\n%d\n%d", a + b, a - b, a * b, a / b, a % b);
    return 0;
}