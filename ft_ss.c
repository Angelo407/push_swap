# include "push_swap.h"


void    ss(int argc, int *a, int *b)
{
    swap_a(argc, *a);
    swap_b(argc, *b);
}




int main(int argc, char **argv)
{
    int *a = {3, 9, 5, 2, 6};
    int *b = {5, 8, 9, 4, 2};
    
    ss(*a, *b);

    return (0);
}