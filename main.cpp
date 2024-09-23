#include <iostream>
#include <memory>


int main() {
    auto numbers = std::make_unique<int[]>(10);
    numbers[0] = 10;
    std::cout << numbers[0] << std::endl;

    auto x = std::make_shared<int>();
    *x = 10;

    std::shared_ptr<int> y(x);

    if (x == y) {
        std::cout << "x is equal to y" << std::endl;
    }

    std::cout << *y << std::endl;

    return 0;
}
