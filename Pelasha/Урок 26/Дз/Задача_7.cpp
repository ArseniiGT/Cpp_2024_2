//Задача 7: 
//Используя контейнер set, реализуйте функцию для удаления дубликатов из списка чисел.
//
//Пример работы программы :
//Входные данные :
//{1, 2, 3, 2, 4, 1, 5}
//
//Выходные данные :
//List without duplicates : 1 2 3 4 5

#include <iostream>
#include <set>
#include <sstream>

void DelВuplicate(int arr[])
{
	std::set <int> nums;
	for (int i = 0; i < sizeof(arr) - 1; i++)
	{
		nums.insert(arr[i]);
	}
	std::cout << "List without duplicates: " << std::endl;
	for (int c : nums)
	{
		std::cout << c << " ";
	}
}
int main()
{
	int arr[] = {1, 2, 3, 2, 4, 1, 5};
	DelВuplicate(arr);
	return 0;
}
