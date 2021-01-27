#include <iostream>

int main() {
    int a;
    int x, y, z;
    std::cin >> a;
    scanf("%1d%1d%1d", &x, &y, &z);
    std::cout << a * z << std::endl << a * y << std::endl << a * x << std::endl << (a * z) + (a * y * 10) + (a * x * 100);
    return 0;
}