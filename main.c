# include "push_swap.h"


int main(int argc, char **argv)
{
    int int_array[argc - 1];
    int i;
    int j;
    int *a;
    int *b;

    i = 1;
    j = -1;
    while (++j < argc - 1)
    {
        int_array[j] = ft_atoi(argv[i++]);
//        printf("int_array[j] = %d\n", int_array[j]);
        *a = int_array[j];
//        printf("*a = %d\n", *a);
    }


//    b = {5, 7, 8, 9, 4};
//    b = 5, 7, 8, 9;

//    int b[3] = {5, 7, 8};
//    int b[2] = {5, 7};
//    int b[1] = {5};
//    int b[0] = {};

//    printf("*b = %d\n", b[1]);

    swap_a(argc - 1, a);
    swap_b(argc - 1, b);



    return (0);
}
