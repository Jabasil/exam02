#include <unistd.h>
#include <stdlib.h>

int	ft_words(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			res++;
		i++;
	}
	return (res);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int		i;
	int		in;
	int		word;
	char	*str;

	i = 0;
	word = 0;
	str = NULL;
	in = 0;
	if (argc == 2)
	{
		word = ft_words(&argv[1][i]);
		i = ft_strlen(&argv[1][i]);
		str = (char *)malloc(sizeof(argv[1][i + word - 1]));
		if (!str)
			return (0);
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				str[in] = '_';
				in++;
				str[in] = argv[1][i] + 32;
				in++;
				i++;
			}
			else
			{
				str[in] = argv[1][i];
				in++;
				i++;
			}
		}
		str[in] = '\0';
		in = 0;
		while (str[in] != '\0')
		{
			write(1, &str[in], 1);
			in++;
		}
		free(str);
	}
	write(1, "\n", 1);
	return (0);
}
