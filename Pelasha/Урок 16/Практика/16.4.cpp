#include <iostream>
#include <string>
int main()
{
    setlocale(LC_ALL, "ru");
    std::string s1;
    getline(std::cin, s1);
    int i = 0;
    int cnt = 1;
    while (s1[i])
    {
        if (s1[i] == ' ')
        {
            cnt++;
        }
        i++;
    }
    std::cout << cnt;
}
