#include <unistd.h>
#include <stdio.h>



int	ft_check(char *a, char *b)
{
/*	int	i;

	i = 0;
	while (a[i] != '\0' && b[i] != '\0')
		i++;
	if (i == 1)
		return (1);
	else
		return (0);
		*/
	if (a[0] == '\0' || b[0] == '\0')
		return (1);
	else if (a[1] != '\0' && b[i+1] != '\0')
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	a;
	char	b;
	int		check;

	i = 0;
	check = 0;
	a = 0;
	b = 0;
	check = ft_check(argv[2], argv[3]);
	if (check == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argc == 4)
	{
		a = *argv[2];
		//printf("%c\n", a);
		b = *argv[3];
		//printf("%c\n", b);
		while (argv[1][i] != '\0')
		{
			//printf("%d\n", i);
			if (argv[1][i] == a)
			{
				argv[1][i] = b;
				write(1, &argv[1][i], 1);
				i++;
			}
			else
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
