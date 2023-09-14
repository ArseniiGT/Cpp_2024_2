 #include <iostream>
class Person
{
    int age;

protected:
    char* name = new char[100];

public:
    Person();
    void display()
    {
        std::cout << "Имя: " << name << std::endl;
        std::cout << "Возраст: " << age << std::endl;
    }
};
class Employee : Person
{
    char* company = new char[100];

public:
    Employee();
    void showEmployeeName()
    {
        std::cout << "Имя: " << name << std::endl;
        std::cout << "Компания: " << company << std::endl;
    }
};


int main()
{
    std::setlocale(LC_ALL, "ru");

    Person human1;
    human1.display();
    Employee human2;
    human2.showEmployeeName();


}

Person::Person()
{
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << "Введите возраст: ";
    std::cin >> age;
    std::cout << std::endl;
}

Employee::Employee()
{
    std::cout << "Введите компанию: ";
    std::cin >> company;
    std::cout << std::endl;
}
