#include <iostream>
#include "Make_Product_Class.h"

int main(void) {
	double zah_k;
	Product x;

	//тест методів Display(...) і Read(...)
	x.Read();
	x.Display();
	zah_k = x.power();
	std::cout << "\n\nZahalnya kaloriynist: " << zah_k;

	//тест зовінішньої функції "Make_Product"
	uns_i first;
	double second;
	std::cout << "\n\nVvedit first: "; std::cin >> first;
	std::cout << "Vvedit second: "; std::cin >> second;

	x = MakeProduct(first, second);
	x.Display();
	zah_k = x.power();
	std::cout << "\n\nZahalnya kaloriynist: " << zah_k;

	return 0;
}