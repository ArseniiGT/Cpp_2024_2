//Задача 3: 
// Напишите функцию, которая подсчитывает количество уникальных слов в предложении с использованием множества.
//Пример работы программы :
//Входные данные :
//"this is a test sentence to test unique words"
//Выходные данные :
//Number of unique words : 8

#include <iostream>
#include <set>
#include <string>
#include <sstream>
int CountUniqueWords(const std::string& sent)
{
	std::set <std::string> unique; // создание множества для хранения юник слов
	std::istringstream iss(sent); //???
	std::string word;
	while (iss >> word)
	{
		for (char& c : word)
		{
			c = tolower(c);
		}
		unique.insert(word); // заносим слово в множество
	}
	return unique.size();
}
int main()
{
	std::string inputSent = "this is a test sentence to test unique words";
	int unique = CountUniqueWords(inputSent);
	std::cout << "Number of unique words: " << unique << std::endl;
	return 0;
}
