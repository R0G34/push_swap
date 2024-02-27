#include "../includes/push_swap.h"

int is_valid_argument(char *arg)
{
    int i = 0;
    int has_space = 0;

    while (arg[i])
    {
        if (!is_digit(arg[i]) && arg[i] != ' ' && arg[i] != '-' && arg[i] != '+')
            return (0);
        if (arg[i] == ' ' && arg[i + 1] == '\0')
            has_space = 1;
        i++;
    }
    if (has_space)
        return (0);
    if (ft_strcmp(arg, "0") == 0)
        return (0);
    return (1);
}

int is_number(char *av)
{
    int i = 0;

    if (av[i] == '-' || av[i] == '+')
        i++;
    while (av[i])
    {
        if (!is_digit(av[i]))
            return (0);
        i++;
    }
    return (1);
}

int have_duplicates(char **av)
{
    int i;
    int j;

    i = 1;
    while (av[i])
    {
        j = 1;
        while (av[j])
        {
            if (j != i && nbstr_cmp(av[i], av[j]) == 0)
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int is_zero(char *av)
{
    int i = 0;

    while (av[i] == '0')
        i++;
    if (!av[i])
        return (1);
    return (0);
}

int is_correct_input(char **av)
{
    int i;
    int nb_zeros;

    nb_zeros = 0;
    i = 1;
    while (av[i])
    {
        if (!is_valid_argument(av[i]))
            return (0);
        nb_zeros += is_zero(av[i]);
        i++;
    }
    if (nb_zeros > 1)
        return (0);
    if (have_duplicates(av))
        return (0);
    return (1);
}