#include <iostream>
#include <iomanip>

int main() {
    std::string name;
    int price, temperature;
    bool hasCashback;
    const int RIGHT_WIDTH = 7, LEFT_WIDTH = 20;
    std::cout << "Product's name: ";
    std::cin >> name;
    std::cout << "Product's price: ";
    std::cin >> price;
    std::cout << "Is cash-back available for this product? (true/false) ";
    std::cin >> /* Input your code here.. */  hasCashback;
    std::cout << "Maximum storing temperature: ";
    std::cin >> temperature;

    std::cout << '\n' << std::string(15, '*') << " OUTPUT " << std::string(15, '*') << "\n\n";

    std::cout << name << std::endl;

    // Input your code here..

    return 0;
}
