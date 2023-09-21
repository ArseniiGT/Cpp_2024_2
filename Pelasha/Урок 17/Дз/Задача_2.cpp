//Создай класс Fraction (обыкновенная дробь). 
// Добавь конструктор, который будет принимать два целых числа и добавлять объекту атрибуты - числитель и знаменатель. 
//Добавь метод print, который будет возвращать текстовое представление объекта в формате: 
// «Дробь {числитель}/{знаменатель}», например «Дробь 1/2». Переопредели методы сравнения ==, !=, >,  <, >=, <=. 
//Методы должны возвращать True или False.
//Считай с клавиатуры четыре целых числа  - числитель и знаменатель первой дроби и числитель и знаменатель второй дроби. 
//Создай экземпляры класса Fraction с параметрами считанными с клавиатуры. 
// Выведи результаты сравнения==, !=, >,  <, >=, <= этих дробей.
//Входные данные:
//Вводится четыре строки, каждая строка содержит целое число - числитель и знаменатель первой дроби и числитель и знаменатель второй дроби.
//
//Выходные данные:
//Выводится 6 строк 1 или 0.
//Пример ввода:
//1
//2
//2
//3
//Пример вывода:
//0
//1
//0
//1
//0
//1


#include <iostream>
using namespace std;


class Fraction
{
public:
    double num, den;
    Fraction(double n, double d)
    {
        num = n;
        den = d;
    }

    bool operator == (Fraction& c2) //перегрузка оператора "=="
    {
        if ((this->num / this->den) == (c2.num / c2.den))
        {
            return true;
        }
        return false;
    }

    bool operator != (Fraction& c2) //перегрузка оператора "!="
    {
        if ((this->num / this->den) != (c2.num / c2.den))
        {
            return true;
        }
        return false;
    }

    bool operator > (Fraction& c2) //перегрузка оператора ">"
    {
        if ((this->num / this->den) > (c2.num / c2.den))
        {
            return true;
        }
        return false;
    }

    bool operator < (Fraction& c2) //перегрузка оператора "<"
    {
        if ((this->num / this->den) < (c2.num / c2.den))
        {
            return true;
        }
        return false;
    }
    
    bool operator >= (Fraction& c2) //перегрузка оператора ">="
    {
        if ((this->num / this->den) >= (c2.num / c2.den))
        {
            return true;
        }
        return false;
    }

    bool operator <= (Fraction& c2) //перегрузка оператора "<="
    {
        if ((this->num / this->den) <= (c2.num / c2.den))
        {
            return true;
        }
        return false;
    }

};

int main() 
{
    
    setlocale(LC_ALL, "ru");
    double num, den;
    cin >> num;
    cin >> den;
    Fraction fraction1(num, den);
    cin >> num;
    cin >> den;
    Fraction fraction2(num, den);
    bool n;
    n = fraction1 == fraction2;
    cout << n <<endl;
    n = fraction1 != fraction2;
    cout << n << endl;
    n = fraction1 > fraction2;
    cout << n << endl;
    n = fraction1 < fraction2;
    cout << n << endl;
    n = fraction1 >= fraction2;
    cout << n << endl;
    n = fraction1 <= fraction2;
    cout << n << endl;
    return 0;
}
