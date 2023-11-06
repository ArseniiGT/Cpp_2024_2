//Задача 2: 
// Реализуйте программу для управления задачами с использованием очереди.
// Добавьте, обработайте и удалите задачи.
//Пример работы программы :
//Входные данные :
//tasks.push("Task 1");
//tasks.push("Task 2");
//tasks.push("Task 3");
//Выходные данные :
//Current task : Task 1
//Next task : Task 2

#include <iostream>
#include <queue>
int main()
{
	std::queue <std::string> tastks;
	tastks.push("Task 1");
	tastks.push("Task 2");
	tastks.push("Task 3");

	std::cout << "Current task : " << tastks.front() << std::endl;
	tastks.pop();
	std::cout << "Next task: " << tastks.front() << std::endl;
	tastks.pop();
  return 0;
}
