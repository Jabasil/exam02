#include "do_op.h"

int main(int argc, char **argv)
{
	int	res;
	int	a;
	int	b;

	res = 0;
	a = 0;
	b = 0;
	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		if (argv[2][0] == '+')
		{
			res = a + b;
			return(printf("%d", res));
		}
		else if (argv[2][0] == '-')
		{
			res = a - b;
			return(printf("%d", res));
		}
		else if (argv[2][0] == '*')
		{
			res = a * b;
			return(printf("%d", res));
		}
		else if (argv[2][0] == '/')
		{
			res = a / b;
			return(printf("%d", res));
		}
		else if (argv[2][0] == '%')
		{
			res = a % b;
			return(printf("%d", res));
		}
	}
	write(1, "\n", 1);
	return (0);
}