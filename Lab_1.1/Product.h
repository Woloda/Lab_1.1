#pragma once
typedef unsigned int uns_i;

class Product {
	uns_i first;
	double second;
public:
	void set_f(uns_i value) { first = value; }
	uns_i get_f() const { return first; }

	void set_s(double value) { second = value; }
	double get_s() const { return second; }

	void   Read();
	void Display() const;
	bool Init(uns_i, double);           //перевірка на коректність введених значень і ініціалізація їх

	double power() const;               //загальна калорійність продукту
};