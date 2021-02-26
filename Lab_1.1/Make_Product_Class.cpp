#include <stdlib.h>
#include "Make_Product_Class.h"

Product MakeProduct(uns_i value_fir, double value_sec) {
	Product x;
	if (!x.Init(value_fir, value_sec))
		exit(-1); //завершення робти

	return x;
}