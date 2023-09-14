#include <iostream>
class Tax
{
    static double n;
    static int sum;

public:
    static void setN()
    {
        std::cout << "Введите ставку налога: ";
        std::cin >> n;
        std::cout << std::endl;
    }
    static void getN()
    {
        std::cout.precision(2);
        std::cout << std::fixed << n * sum;
        std::cout << std::endl;
    }

};

int main()
{
    std::setlocale(LC_ALL, "ru");

    Tax test;
    Tax::setN();
    Tax::getN();
}
