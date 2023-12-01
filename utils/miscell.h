#ifndef SICMA_MISCELL_H
#define SICMA_MISCELL_H

// pointer
#define is_null(ptr) ((ptr) == NULL)

#define f6nul(ptr) free(ptr); ptr = NULL

// random number
#define RANDOM_DECLARE(type) \
	static inline type rand_##type(type min, type max) \
	{ return ((max) - (min)) * rand() / (RAND_MAX + (type) 1) + (min); }

// declare
#define DECLARE_SWAP(type) \
	static inline void swap_##type(type *p1, type *p2) \
	{ type tmp = *p1; *p1 = *p2; *p2 = tmp; }

#define DECLARE_MIN(type) \
	static inline type min_##type(type a, type b) { return a < b ? a : b; }

#define DECLARE_MAX(type) \
	static inline type max_##type(type a, type b) { return a > b ? a : b; }

#endif

