# include "push_swap.h"

int swap_a(int a[])
{
    int temp;
    int i;

    printf("avant swap : %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);

    temp = a[0]; // temp = 9
    a[0] = a[1]; // a[0] = 4 => ok
    a[1] = temp; // a[1] = 9 => ok

    printf("après swap : %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);

    i = 0;
    while (a[i])
    {
        printf("%d ", a[i]);
        i++;
    }
    printf("\n");

    printf("avant return : %d\n", a[4]);
    return (*a);
}



int main(void)
{

    int a[5] = {9, 4, 5, 1, 3};

//    printf("avant swap : %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);

    swap_a(&a[0]);

//    printf("après swap : %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);

    return (0);
}
