//Задача 4: 
//Создайте отображение для хранения пар "название товара - цена".
//Выведите информацию о товаре по его названию.
//Пример работы программы :
// 
//Входные данные :
//products["apple"] = 1.0;
//products["banana"] = 0.5;
//products["cherry"] = 2.5;
//Выходные данные :
//Price of banana : $0.5

#include <iostream>
#include <map>
int main()
{
	setlocale(LC_ALL, "ru");
	std::map <std::string, double> price;
	price["apple"] = 1.0;
	price["banana"] = 0.5;
	price["cherry"] = 2.5;
	std::string fruit;
	std::cout << "Введите продукт: ";
	std::cin >> fruit;
	std::cout << std::endl;
	std::cout << "Price of " << fruit << ": " << price[fruit];
	std::cout << std::endl;
	return 0;
}
