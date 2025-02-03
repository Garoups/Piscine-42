/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:49:41 by femontei          #+#    #+#             */
/*   Updated: 2025/01/29 23:35:43 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

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

int	ft_convert(char *str, int len_base, char *base)
{
	long	result;
	int		i;
	int		digit;

	result = 0;
	while (*str)
	{
		i = 0;
		digit = -1;
		while (i < len_base)
		{
			if (*str == base[i])
			{
				digit = i;
				break ;
			}
			i++;
		}
		if (digit == -1)
			break ;
		result = result * len_base + digit;
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len_base;
	int	sign;

	if (!ft_base_valid(base))
		return (0);
	len_base = 0;
	while (base[len_base])
		len_base++;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	return (ft_convert(str, len_base, base) * sign);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi_base("  -1010", "01"));
	printf("%d\n", ft_atoi_base("+FF", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("  77", "01234567"));
	printf("%d\n", ft_atoi_base("  +432", "01234"));
	printf("%d\n", ft_atoi_base("1A", "0123456789"));
	return (0);
}*/
