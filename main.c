# include "push_swap.h"


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

//  int *sa = swap_a(&(*int_array)); // Pourquoi en ajoutant un argument je supprime "*" ??
    int *sa = swap_a(argc - 1, int_array);
//    printf("*sa = %d | sa[0] = %d | *(sa + 1) = %d | sa[1] = %d\n", *sa, sa[0], *(sa + 1), sa[1]);

//    int b[argc_value] = {5, 7, 8, 9, 4};
//    int b[5] = {5, 7, 8, 9, 4};
    int b[4] = {5, 9, 7, 6};
// ENTRE INDEX 3 ET 4 EN FONCTION DE CE QUE J'AI éCRIT DANS LE IF DE ft_sb
    swap_b(argc - 1, b);

//    printf("b[0] = %d | b[1] = %d | b[2] = %d\n", b[0], b[1], b[2]);


    return (0);
}
