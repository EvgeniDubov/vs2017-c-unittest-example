#include "fun.h"

int foo(void *data) {	
	return sizeof(data);
}

double bar(void *data, double coef) {
	return coef * sizeof(data);
}
