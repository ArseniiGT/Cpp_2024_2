//Задача 9: 
//Создайте отображение, представляющее словарь перевода слов с английского на французский.
//Выведите перевод заданного слова.
//
//Пример работы программы :
//Входные данные :
//hello
//
//Выходные данные :
//Translation of hello : bonjour

#include <iostream>
#include <map>
int main()
{
	setlocale(LC_ALL, "ru");
	std::map <std::string, std::string> translation;
	translation["Hello"] = "bonjour";
	translation["Cat"] = "Chat";
	translation["Dog"] = "Chien";
	translation["House"] = "Maison";
	translation["Book"] = "Livre";
	std::string word;
	std::cout << "Введите слово: ";
	std::cin >> word;
	std::cout << std::endl;
	std::cout << "Translation of " << word << ": " << translation[word];
	std::cout << std::endl;
	return 0;
}
