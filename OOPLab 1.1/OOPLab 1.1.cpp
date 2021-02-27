#include <iostream>
#include <Windows.h>
#include "Goods.h"

using namespace std;

bool Goods::Init(double price, int number)
{
	bool tmp;
	if (price>0 && number >0)
	{
		first = price;
		second = number;
		tmp = true;
	}
	else
		tmp = false;
	    cout << "Некоректні параметри" << endl;
		return tmp;
}
void Goods::Read()
{
	double first;
	int second;

	do {
		cout << "Введіть ціну = ";cin >> first;
		cout << "Введіть кількість = ";cin >> second;
	} while (!Init(first, second));
}
void Goods::Display() 
{  
	cout << "Ціна товару = "      << GetFirst()  << endl;
	cout << "Кількість одиниць товару = " << GetSecond() << endl;
}
double Goods::Cost()
{
	double F = first * second;
	cout << "Ціна загалом = " << F << endl;
	return F;
}








	