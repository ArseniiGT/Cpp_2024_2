include <iostream>
class Total_price
{
    double price;
    static double max_price;

public:
    void SetPrice()
    {
        std::cout << "Введите цену: ";
        std::cin >> price;
    }
    double CheckPrice()
    {
        if (price <= max_price)
        {
            return price;
        }
        price = max_price;
        return price;
    }
    void show()
    {
        std::cout << price;
    }

};
double Total_price::max_price = 1000;
int main()
{

    setlocale(LC_ALL, "ru");
    Total_price P1;
    P1.SetPrice();
    P1.CheckPrice();
    P1.show();
}
