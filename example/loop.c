#include "utils/loop.h"
#include <stdio.h>

int main()
{
    int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    int a_item;
    foreach_arr(a_item, a, 10) {
        printf("%d ", a_item);
    }
    putchar('\n');

    rforeach_arr(a_item, a, 10) {
        printf("%d ", a_item);
    }
    putchar('\n');

    return 0;
}