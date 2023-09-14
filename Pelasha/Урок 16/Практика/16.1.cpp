#include <iostream>
#include <string>
int main()
{
    setlocale(LC_ALL, "ru");
    std::string s1 = "Как тебя зовут?", s2, s3="Привет, !";
    std::cout << s1 << std::endl;
    std::cin >> s2;
    s3.insert(7, s2);
    std::cout << s3;

}
