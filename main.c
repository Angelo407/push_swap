# include "push_swap.h"

int *numbers_array(int argc, char **argv)
{
    int *int_array;
//    int *int_array_return; // pour un le free ms j'arrive pas !?!
    int i;
    int j;

//    int_array_return = NULL;
    i = 1;
    j = 0;
    int_array = malloc(sizeof(int));
    if (!int_array)
        return (0);
    while (j < argc - 1)
        int_array[j++] = ft_atoi(argv[i++]);
//    int_array_return = int_array;
//    free(int_array);
//    return (int_array_return);
    return (int_array);
}


int main(int argc, char **argv)
{
    t_array a;
    t_array b;
    int     *int_array;

    a.a = malloc(sizeof(int));
    if (!a.a)
        return (0);
    b.b = malloc(sizeof(int));
    if (!b.b)
        return (0);
    a.a[0] = 5;
    a.a[1] = 3;
    a.a[2] = 2;
    a.a[3] = 8;
    a.a[4] = 9;


    numbers_array(argc, argv);
//    int_array = numbers_array(argc, argv);
//    printf("*int_array = %d\n", *(int_array + 1));


//    swap_a(argc - 1, a);
//    swap_b(argc - 1, b);


/*
	char	dst[] = "EFGHI";
	char	src[] = "1234";
	printf("%s\n", (char *)ft_memmove(dst, src, 2));
*/

    push_b(&a, &b);


    return (0);
}

//gcc main.c ft_sa.c ft_sb.c ft_atoi.c ft_pb.c ft_check_empty_array.c ft_size_array_int.c ft_memmove.c ft_itoa.c ft_strlen.c -w