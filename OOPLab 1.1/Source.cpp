#include <iostream>
#include <Windows.h>
#include "Goods.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool result;

	Goods x1;
	x1.Read();
	x1.Display();
	x1.Cost();


}