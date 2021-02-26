#include <iostream>
#include "Product.h"

void  Product::Read() {
	uns_i value_fir;         //unsigned int "first"
	double value_sec;        //double "second"

	do {
		std::cout << "\nVveid znachenua argymentiv: ";

		std::cout << "\n\nVvedit first: "; std::cin >> value_fir;
		std::cout << "Vvedit second: "; std::cin >> value_sec;
	} while (!Init(value_fir, value_sec));
}

void  Product::Display() const {
	std::cout << "\n\nPokaz vvedenux vamu znachenuy";
	std::cout << "\n\nfirst: "  << first;
	std::cout << "\nsecond: " << second;
}

bool  Product::Init(uns_i value_fir, double value_sec) {
	if (value_fir >= 0 && value_sec >= 0) {
		first = value_fir;
		second = value_sec;
		return true;
	}
	else {
		std::cout << "\n\nNekorektno vvedeni znachenua argymentiv!!!";
		return false;
	}
}

double Product::power() const{ return first * 10.0 * second; }