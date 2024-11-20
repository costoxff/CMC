#ifndef CMC_UTILS_MATH_H
#define CMC_UTILS_MATH_H

#define PI 3.141592653589793

// exp(1) = 2.718281828459045
#define EXP_1 2.718281828459045

// radius and degree converter
#define RAD2DEG(x) x * 57.29577951308232
#define DEG2RAD(x) x * 0.017453292519943295

// random number
#define RAND_FUNC_GEN(type) \
	static inline type rand_##type(type min, type max) \
	{ return ((max) - (min)) * rand() / (RAND_MAX + (type) 1) + (min); }

#endif