//Напиши программу, которая запрашивает ввод с клавиатуры строки(пароля) и выполняет проверку корректности пароля. 
//Корректный пароль должен иметь длину не менее 6 символов, а также включать в себя хотя бы один знак из набора !@#$%^&*()<>?,. символов. 
//Если пароль корректен, то он выводится на экран. 
//В противном случае вызывается одно из собственных исключений MinLengthPasswordError (не выполнено условие минимальной длины) или NoSpecialCharactersError (нет символа из набора). 
//Считай с клавиатуры одну строку - пароль. 
// Если он корректный - выведи на экран текст «Пароль: {password}», например «Пароль: {12345678@}». 
//Если пароль некорректный, то с помощью вызова исключений MinLengthPasswordError или NoSpecialCharactersError выведи на экран текст «Короткий пароль» или «Нет специального символа».
//Сначала проверяется условие необходимой длины, если оба условия ложны, то выводится одно сообщение - «Короткий пароль».
//При написании кода программы используй обработку исключений. Создай собственные исключения MinLengthPasswordError и NoSpecialCharactersError.
//Входные данные:
//Вводится одна строка - пароль.
//Выходные данные:
//Выводится строка «Пароль: {password}» или строка «Короткий пароль» или «Нет специального символа».
//
//Пример ввода:
//1234
//Пример вывода:
//Короткий пароль
//Пример ввода:
//12345678


#include <iostream>
#include <exception>
void MinLengthPasswordError(std::string& pass)
{
    int cnt = 0;
    for (int i = 0; i <= pass.length(); i++)
    {
        cnt++;
    }
    if (cnt < 6)
    {
        throw "Короткий пароль\n";
    
    }
}
void NoSpecialCharactersError(std::string& pass)
{
    int cnt = 0;
    for (int i = 0; i <= pass.length(); i++)
    {
        if (pass[i] == '!' || pass[i] == '@' || pass[i] == '#' || pass[i] == '$' ||
            pass[i] == '%' || pass[i] == '^' || pass[i] == '&' || pass[i] == '*' ||
            pass[i] == '(' || pass[i] == ')' || pass[i] == '<' || pass[i] == '>' ||
            pass[i] == ',' || pass[i] == '.')
        {
            cnt++;
        }
    }
    if (cnt == 0)
    {
        throw "Нет специального символа/n";
    }
}

int main() 
{
    setlocale(LC_ALL, "ru");
    std::string password;
    std::cout << "Введите пароль: ";
    std::cin >> password;
    try
    {
        MinLengthPasswordError(password);
        NoSpecialCharactersError(password);
        std::cout << "Ваш пароль: " << password;
    }
    catch (const char* exception)
    {
        std::cout << exception;

    }
}
