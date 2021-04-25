#include <unistd.h>

void	ft_putnbr(int nbr)
{
	long int	aux;
	char		digit;

	aux = nbr;
	if (aux < 0)
	{
		write(1, "-", 1);
		aux = -aux;
	}
	if (aux > 10)
		ft_putnbr(aux / 10);
	
	digit = aux % 10 + '0';
	write(1, &digit, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	unsigned int	len;

	len = ft_strlen(str);
	write(1, str, len);
}

void			ft_print_combn(int n)
{
	int		cursor;
	char	nbr[9];
	int		start_over;

	nbr[0] = '0';
	cursor = 0;
	start_over = 1;
	while (cursor >= 0)
	{
		while (cursor < n && nbr[cursor] <= '9' - (n - cursor) + 1)
		{
			if (cursor < n - 1)
				cursor++;
			else if (cursor == n - 1)
			{
				start_over = 0;
				write(1, nbr, n);
				if (nbr[0] <= '9' - n)
					write(1, ", ", 2);
			}
			nbr[cursor] = start_over ? nbr[cursor - 1] + 1 : nbr[cursor] + 1;
		}
		nbr[--cursor]++;
		start_over = 1;
	}
}
