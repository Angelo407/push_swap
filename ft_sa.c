# include "push_swap.h"

int *swap_a(int *a)
{
    int temp;

    temp = a[0];
    a[0] = a[1];
    a[1] = temp;
    write(1, "sa\n", 3);
//    printf("avant return : %d | %p\n", *a, a);
//    printf("avant return : %d | %p\n", *(a + 1), a + 1);

//    printf("avant return : a = %d\n", a[0]);
//    printf("avant return : a = %d\n", *a);
    return (a);
}

/*
int main(void)
{
    int a[2] = {9, 4};

//    printf("avant swap : %d %d\n", a[0], a[1]);
    swap_a(a);
//    printf("après swap : %d %d\n", a[0], a[1]);

    return (0);
}
*/