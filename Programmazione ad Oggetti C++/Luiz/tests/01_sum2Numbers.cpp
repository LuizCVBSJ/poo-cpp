#include <iostream>

int main()
{
    int first;
    int second;

    std::cout << "Type the first number" << std::endl;
    std::cin >> first;

    std::cout << "Type the second number" << std::endl;
    std::cin >> second;
    
    int sum = first + second;
    std::cout << "The sum of " << first << " and " << second << " is " << sum << std::endl;
}
