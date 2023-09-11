#include <iostream>
#include <Windows.h>
int main()
{
	HINSTANCE load;
	//load = LoadLibrary(L"C:/Users/Ars/source/repos/DynemicLib/x64/Debug/DynemicLib.dll");
	load = LoadLibrary(L"DynemicLib.dll");
	typedef int (*sum)(int, int);
	typedef int (*min)(int, int);
	typedef int (*mult)(int, int);
	typedef double (*div)(int, int);
	sum Sum;
	min Min;
	mult Mult;
	div Div;
	Sum = (sum)GetProcAddress(load, "Sum");
	Min = (min)GetProcAddress(load, "Min");
	Mult = (mult)GetProcAddress(load, "Mult");
	Div = (div)GetProcAddress(load, "Div");
	int a = 200;
	int b = 100;


	std::cout << Sum(a, b) << "\n";
	std::cout << Min(a, b) << "\n";
	std::cout << Mult(a, b) << "\n";
	std::cout << Div(a, b) << "\n";

	FreeLibrary(load);
}