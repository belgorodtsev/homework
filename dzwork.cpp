#include <cmath>
#include <iostream>

int main()
{   // 5
    std::cout << " Enter a three-digit number " << std::endl;
    int number = 0;
    std::cin >> number;
    int b = number / 100;
    number = number % 100;
    number = number * 10 + b;
    std::cout << number << std::endl;
    //
    // 10
    std::cout << " Enter a number N" << std::endl;
    int n = 0;
    std::cin >> n;
    if (n >= 10 && n <= 999)
    {
        int number1 = (n / 10) % 10 * 100 + n % 10 + (n / 100) % 10 * 10;
        std::cout << " Number = " << number1 << std::endl;
    }
    else
    {
        std::cout << "error!" << std::endl;
    }
    //
    return 0;
}
