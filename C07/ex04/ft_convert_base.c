/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:16:30 by femontei          #+#    #+#             */
/*   Updated: 2025/01/30 17:47:36 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		ft_len_base(char *base);
char	*ft_print_num(long nb, char *base, int sign, char *num);
char	*ft_putnbr_base(long nb, char *base, int sign);

int	ft_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'
			|| (base[i] >= '\t' && base[i] <= '\r')
			|| base[i] == ' ')
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

char	*ft_sign(char *str, int *sign)
{
	*sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign *= -1;
		str++;
	}
	return (str);
}

char	*ft_atoi(char *str, char *base, int *size, int *sign)
{
	int	i;
	int	j;
	int	valid;

	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	str = ft_sign(str, sign);
	i = 0;
	while (*str)
	{
		j = -1;
		valid = 0;
		while (base[++j])
		{
			if (*str == base[j])
				valid = 1;
		}
		if (valid == 0)
			break ;
		str++;
		i++;
	}
	*size = i;
	return (str - i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	int		i;
	int		j;
	int		size;
	int		sign;

	if (!ft_base_valid(base_from) || !ft_base_valid(base_to))
		return (NULL);
	nbr = ft_atoi(nbr, base_from, &size, &sign);
	i = 0;
	nb = 0;
	while (i < size)
	{
		j = 0;
		while (base_from[j] != nbr[i])
			j++;
		nb = nb * ft_len_base(base_from) + j;
		i++;
	}
	return (ft_putnbr_base(nb, base_to, sign));
}
