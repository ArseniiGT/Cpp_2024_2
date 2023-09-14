#include <iostream>
class Total_price
{
    double price;
    int curr;
    static double one;
    static double two;
    static double three;

public:
    void SetPrice()
    {
        std::cout << "Введите цену в рублях: ";
        std::cin >> price;
        std::cout << std::endl;
    }
    void show()
    {
        std::cout << price;
    }
    void InputCurr()
    {
        std::cout << "Введите тип валюты: ";
        std::cin >> curr;
    }
    void Convert()
    {
        switch (curr)
        {
        case 1:
            price /= one;
            std::cout.precision(2);
            std::cout << std::fixed << price;
            break;
        case 2:
            price /= two;
            std::cout.precision(2);
            std::cout << std::fixed << price;
            break;
        case 3:
            price /= three;
            std::cout.precision(2);
            std::cout << std::fixed << price;
            break;
        }
    }
};
double Total_price::one = 60.5;
double Total_price::two = 35.8;
double Total_price::three = 0.85;
int main()
{

    setlocale(LC_ALL, "ru");
    Total_price P1;
    P1.SetPrice();
    P1.InputCurr();
    P1.Convert();
}
