# include "push_swap.h"

int *swap_a(int argc, int *a)
{
    int temp;

    if ((argc - 1) < 1)
        return (0);

    temp = a[0];
    a[0] = a[1];
    a[1] = temp;
    write(1, "sa\n", 3);

    return (a);
}
