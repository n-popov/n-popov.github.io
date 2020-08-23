#include <iostream>
#include <iomanip>

int main() {
    std::string name;
    int price, temperature;
    bool hasCashback;
    const int RIGHT_WIDTH = 7, LEFT_WIDTH = 20;
    std::cout << "Product's name:" << std::endl;
    std::cin >> name;
    std::cout << "Product's price:" << std::endl;
    std::cin >> price;
    std::cout << "Is cashback available for this product?\n(0 for false, any other number for true)" << std::endl;
    std::cin >> hasCashback;
    std::cout << "Maximum storing temperature:" << std::endl;
    std::cin >> temperature;

    std::cout << '\n' << std::string(15, '*') << " OUTPUT " << std::string(15, '*') << "\n\n";

    std::cout << name << std::endl;

    // Input your code here..

    return 0;
}
