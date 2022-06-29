# include "push_swap.h"






int main(int argc, char **argv)
{
    int int_array[argc - 1];
    int i;

    i = 1;
    while (argc-- > 1)
    {
        int_array[argc - 1] = ft_atoi(argv[i++]);
//        printf("%d ", int_array[argc - 1]);
    }
//    printf("\n");

    swap_a(&int_array[4]);


    return (0);
}


