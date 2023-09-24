//1.Напишите программу, которая вычисляет значение выражения: квадратный корень из (a+2*b). 
//Значения a и b вводятся с клавиатуры в отдельных строках. 
//Программа должна обрабатывать возникающие исключения и выводить сообщение “Error”.

#include <iostream>
#include <math.h>

void func(double a, double b) {
  try
  {
    if ((a + 2 * b) < 0) throw "Error, negative expression";
    std::cout << sqrt(a + 2 * b) << std::endl;
  }
  catch (const char* err)
  {
    std::cout << err << std::endl;
  }
}
int main() {
  double a, b;
  std::cin >> a;
  std::cin >> b;
  func(a, b);
  return 0;
}
