#pragma once

class Goods {
private:
	double first;
	int second;
public:
	double GetFirst()   { return first; }
	double GetSecond()  { return second; }
	void SetFirst(double value) { first = value; }
	void SetSecond(int value) { second = value; }

	bool Init(double price, int number);
	void Display() ;
	void Read();

	double Cost();
};
