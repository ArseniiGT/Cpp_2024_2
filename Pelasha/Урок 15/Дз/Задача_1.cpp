#include <iostream>
class Rectangle
{
    int width, heigh;

public:
    Rectangle(int width = 10, int heigh = 7);

    void show()
    {
        std::cout << "Ширина: " << width << std::endl;
        std::cout << "Высота: " << heigh << std::endl;
    }

    friend void Sq(Rectangle& test);
};
void Sq(Rectangle& test); //нахождение площади

int main()
{
    std::setlocale(LC_ALL, "ru");

    Rectangle test(7, 9);
    test.show();
    Sq(test);
}

Rectangle::Rectangle(int width, int heigh) : width(width), heigh(heigh)
{

}

void Sq(Rectangle& test)
{
    std::cout << "Площадь равна: " << test.width * test.heigh;
}
