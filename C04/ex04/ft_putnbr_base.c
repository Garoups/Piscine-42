/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:18:11 by femontei          #+#    #+#             */
/*   Updated: 2025/01/29 20:15:35 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = 1;
		while (base[i + j])
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr(long num, char *base)
{
	int	c;
	int	i;

	i = 0;
	while (base[i])
		i++;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= i)
	{
		ft_putnbr((num / i), base);
		ft_putnbr((num % i), base);
	}
	else
	{
		c = base[num % i];
		write(1, &c, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!ft_base_valid(base))
		return ;
	ft_putnbr(nbr, base);
}

/*int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	return (0);
}*/
