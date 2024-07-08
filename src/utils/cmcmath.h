#ifndef CMC_UTILS_MATH_H
#define CMC_UTILS_MATH_H

#define F_PI 3.141592653589793F
#define D_PI 3.14159265358979311599796346854

// exp(1) = 2.718281828
#define F_EULER_NM 2.718281828459045F
#define D_EULER_NM 2.71828182845904509079559829842

// radius and degree converter
#define RAD2DEG
#define DEG2RAD 

// random number
#define RAND_FUNC_GEN(type) \
	static inline type rand_##type(type min, type max) \
	{ return ((max) - (min)) * rand() / (RAND_MAX + (type) 1) + (min); }

#endif