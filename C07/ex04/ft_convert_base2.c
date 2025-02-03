/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:31:12 by femontei          #+#    #+#             */
/*   Updated: 2025/01/30 17:48:28 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_len_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	num_len(long nb, int len_baseto, int sign)
{
	int	i;

	i = 0;
	if (sign == -1)
		i++;
	while (nb > 0)
	{
		nb /= len_baseto;
		i++;
	}
	return (i);
}

char	*ft_print_num(long nb, char *base, int sign, char *num)
{
	int	i;
	int	len_num;

	i = 0;
	len_num = num_len(nb, ft_len_base(base), sign);
	if (sign == -1)
		num[0] = '-';
	if (nb == 0)
	{
		num[0] = base[0];
		num[1] = '\0';
	}
	while (nb > 0)
	{
		num[len_num - i - 1] = base[nb % ft_len_base(base)];
		nb /= ft_len_base(base);
		i++;
	}
	return (num);
}

char	*ft_putnbr_base(long nb, char *base, int sign)
{
	char	*num;
	int		len_num;
	int		len_baseto;

	len_baseto = ft_len_base(base);
	len_num = num_len(nb, len_baseto, sign);
	num = (char *)malloc(sizeof(char) * len_num + 1);
	if (num == NULL)
		return (NULL);
	num[len_num] = '\0';
	if ((sign == -1 && len_num == 1) || (len_num == 0 && sign == 0))
	{
		num[0] = base[0];
		return (num);
	}
	return (ft_print_num(nb, base, sign, num));
}
