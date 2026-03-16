#include "utils/loop.h"
#include <stdio.h>

int main()
{
    int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    printf("for_each testing\n");
    int i;
    for_each(i, 10) {
        printf("%d ", a[i]);
    }
    putchar('\n');

    for_each_rev(i, 10) {
        printf("%d ", a[i]);
    }
    putchar('\n');

    printf("for_each_arr testing\n");
    int *p;
    for_each_arr(p, a) {
        printf("%d ", *p);
    }
    putchar('\n');

    for_each_arr_rev(p, a) {
        printf("%d ", *p);
    }
    putchar('\n');

    return 0;
}