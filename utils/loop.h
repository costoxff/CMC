#ifndef SICMA_LOOP_H
#define SICMA_LOOP_H

#include "puniname.h"

#define iter(i, begin, end, step) \
	for ((i) = (begin); (i) < (end); (i) += (step))
#define riter(i, rbegin, rend, step) \
	for ((i) = (rbegin); (i) >= (rend); (i) -= (step)) // reverse

#define foreach(i, end) iter(i, 0, end, 1)
#define rforeach(i, begin) riter(i, begin, 0, 1) // reverse

#define foreach_arr(val, arr, len) \
	int UNIQUE_NAME; for (val = arr[0], UNIQUE_NAME = 0; UNIQUE_NAME < len; val = arr[++UNIQUE_NAME])

#define rforeach_arr(val, arr, len) \
	int UNIQUE_NAME; for (val = arr[len-1], UNIQUE_NAME = len - 1; UNIQUE_NAME >= 0; val = arr[--UNIQUE_NAME])

#endif