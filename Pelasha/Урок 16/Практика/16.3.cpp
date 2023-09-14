#include <iostream>
#include <string>
int main()
{
    setlocale(LC_ALL, "ru");
    std::string s1 = "doma uchi ru", s2=".";
    s1.replace(4, 1, s2);
    s1.replace(9, 1, s2);
    std::cout << s1;
}
