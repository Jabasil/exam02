#include <unistd.h>
#include <stdio.h>

int ft_repeat(char a)
{
	int i;
	int	res;
	char	*alpha;
	char	*alpha_h;


	i = 0;
	res = 1;
	alpha = "abcdefghijklmnopqrstuvwxyz";
	alpha_h = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
	while (alpha[i] != '\0' || alpha_h[i] != '\0')
	{
		if (alpha[i] == a)
		{
			return (res);
		}
		else if (alpha_h[i] == a)
			return (res);
		else
		{
			i++;
			res++;
		}
	}
	
	return (0);
}

int main(int argc, char **argv)
{
	int	i;
	int	plus;

	i = 0;
	plus = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				
				plus = ft_repeat(argv[1][i]);
				while (plus > 0)
				{
					write(1, &argv[1][i], 1);
					plus--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}