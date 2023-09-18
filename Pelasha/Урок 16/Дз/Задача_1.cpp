#include <iostream>
#include <string>
int main()
{
    setlocale(LC_ALL, "ru");
    std::string s1;
    char s2;
    std::cout << "Введите предложение: ";
    getline(std::cin, s1);
    std::cout << "Введите символ: ";
    std::cin>> s2;
    int i = 0;
    int cnt = 0;
    if (s1[0] == s2)
    {
        cnt++;
    }
    while (s1[i] != '\0')
    {
        if (s1[i] == ' ' && s1[i + 1] == s2)
        {
            cnt++;
        }

        i++;
    }
    std::cout << cnt;
}
