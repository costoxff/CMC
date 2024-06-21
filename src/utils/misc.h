#ifndef SICMA_MISCELL_H
#define SICMA_MISCELL_H

/* C11(ISO/IEC 9899:201x) §6.3.2.3 Pointers Section 3
 * An integer constant expression with the value 0, or such an expression cast 
 * to type void *, is called a null pointer constant
*/
#define IS_NULL(ptr) ((ptr) == NULL)
#define F_AND_N(ptr) free(ptr); ptr = NULL 

// function generator
#define SWAP_FUNC_GEN(type) \
	static inline void swap_##type(type *p1, type *p2) \
	{ type tmp = *p1; *p1 = *p2; *p2 = tmp; }

#define MIN_FUNC_GEN(type) \
	static inline type min_##type(type a, type b) { return a < b ? a : b; }

#define MAX_FUNC_GEN(type) \
	static inline type max_##type(type a, type b) { return a > b ? a : b; }

#endif

