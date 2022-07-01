# include "push_swap.h"

// 9, 4, 5, 1, 3

int main(int argc, char **argv)
{
    int argc_value;
    int int_array[argc - 1];
    int i;
    int j;

    argc_value = argc - 1;
    i = 1;
    j = -1;
    while (++j < argc_value)
        int_array[j] = ft_atoi(argv[i++]);

    int *sa = swap_a(&(*int_array));
    printf("*sa = %d | sa[0] = %d | *(sa + 1) = %d | sa[1] = %d\n", *sa, sa[0], *(sa + 1), sa[1]);
    
    return (0);
}
