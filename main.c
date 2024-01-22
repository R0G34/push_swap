#include "push_swap.h"
#include "Libft/libft.h"

void	show_leaks(void)
{
	system("leaks a.out");
}
char	**ft_strjoinArgs(int argc, char **argv)
{
	char	**result;
	char	*str = malloc(ft_strlen(argv[1]));
	char	*aux;

	ft_strlcpy(str, argv[1], ft_strlen(argv[1]));
	for (int i = 2; i < argc;)
	{
		printf("hola");
		aux = ft_strjoin(str, " ");
		free(str);
		str = ft_strjoin(aux, argv[i++]);
		free (aux);
	}
	result = ft_split(str, ' ');
	free(str);
	return (result);
}

int	main(int argc, char **argv)
{
	atexit(show_leaks);
	if (argc > 1)
	{
		char **str = ft_strjoinArgs(argc, argv);
		printf("%p\n", str);
		for (int i = 0; str[i] != NULL; i++)
		{
			printf("%s\n", str[i]);
			free(str[i]);
		}
		free(str);
	}
	else if (argc == 1)
		return (0);
	else
		printf("ERROR\n");
	return (0);
}