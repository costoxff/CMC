#ifndef CMC_UTILS_LOOP_H
#define CMC_UTILS_LOOP_H

// overflow issue
#define for_args(i, begin, end, step) \
	for ((i) = (begin); (i) != (end); (i) += (step))

#define for_each(i, size) for_args(i, 0, size, 1)
#define for_each_rev(i, size) for_args(i, (size)-1, -1, -1) // reverse

#define _ARRAY_SIZE(arr) (sizeof(arr)/sizeof((arr)[0])) // no type checking
#define for_each_arr(ptr, arr) \
	for ((ptr) = (arr); (ptr) != &(arr)[_ARRAY_SIZE(arr)]; (ptr)++)

#define for_each_arr_rev(ptr, arr) \
	for ((ptr) = &(arr)[_ARRAY_SIZE(arr)-1]; (ptr) != (arr) - 1; (ptr)--)

#endif