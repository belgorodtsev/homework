#include <iostream>

void def(double &first,double &second)
{

}
void sum(double &first,double &second)
{
    def(first, second);
    std::cout << "=" << first + second << std::endl;
}
void minus(double &first,double &second)
{
    def(first, second);
    std::cout << "=" << first - second << std::endl;
}
void multiplication(double &first,double &second)
{
    def(first, second);
    std::cout << "=" << first * second << std::endl;
}
void del(double &first,double &second)
{
    def(first, second);
    if (second == 0)
    {
        std::cout << "Error" << std::endl;
    }
    else
        std::cout << "=" << first / second << std::endl;
}

int main()
{
    double first = 0;
    double second = 0;
    char operation = 0;
    std::cin >> first >> operation >> second;
    if (operation == '+' || operation == '-' || operation == '*' || operation == '/')
    {
        switch (operation)
        {
            case '-':
                minus(first,second);
                break;
            case '+':
                sum(first,second);
                break;
            case '*':
                multiplication(first,second);
                break;
            case '/':
                del(first,second);
                break;
        }
    }
    else
        std::cout << "Error" << std::endl;

    return 0;
}
