//Задача 1: 
// Создайте вектор строк, добавьте несколько элементов.Удалите элемент по индексу.
//Пример работы программы :
//Входные данные :
//
//{"apple", "banana", "cherry", "date"}
//
//Выходные данные :
//apple banana date

#include <iostream> 
#include <vector> 

int main() {
	setlocale(LC_ALL, "ru");
	std::vector<std::string> meal = { "apple", "banana", "cherry", "date" };
	int n;
	std::cout << "Исходный вектор: " << std::endl;
	for (const std::string& word : meal) {
		std::cout << word << " ";
	}
	std::cout << "\n";
	std::cout << "Введите индекс элемента, который хотите удалить из вектора: " << std::endl;
	std::cin >> n;
	if (meal.size() > 2) {
		meal.erase(meal.begin() + n);
	}
	std::cout << "Вектор после удаления" << n << "-го элемента: " << std::endl;
	for (const std::string& word : meal) {
		std::cout << word << " ";
	}
	return 0;
}
