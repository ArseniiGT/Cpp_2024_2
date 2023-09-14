#include <iostream>
#include <string>
int main()
{
    setlocale(LC_ALL, "ru");
    std::string s1 = "12345", s2 = " ", s3 = "6789";
    s1 = s1 + s2 + s3;
    std::cout << s1;

}
