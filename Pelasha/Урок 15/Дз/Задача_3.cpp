#include <iostream>
class Circle
{
    int x, y, R;

public:
    void set_center()
    {
        std::cout << "Введите x: ";
        std::cin >> x;
        std::cout << "Введите y: ";
        std::cin >> y;
        std::cout << std::endl;
    }
    void set_radius()
    {
        std::cout << "Введите радиус: ";
        std::cin >> R;
        std::cout << std::endl;
    }
    void get_distance()
    {
        double dis = sqrt((pow((0 - x), 2)) + (pow((0 - y), 2)));
        std::cout.precision(2);
        std::cout << "Расстояние равно: " << std::fixed << dis << std::endl;
    }
    void get_area()
    {
        double p = 3.14;
        std::cout.precision(2);
        std::cout << "Площадь круга равна: " << std::fixed << p*pow(R, 2) << std::endl;
    }
};

int main()
{
    std::setlocale(LC_ALL, "ru");

    Circle fig;
    fig.set_center();
    fig.set_radius();
    fig.get_distance();
    fig.get_area();
}
