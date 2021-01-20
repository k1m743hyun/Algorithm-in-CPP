#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    printf("%d\n%d\n%d\n%d", (a + b) % c, ((a % c) + (b % c)) % c, (a * b) % c, ((a % c) * (b % c)) % c);
    return 0;
}