/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:26:31 by femontei          #+#    #+#             */
/*   Updated: 2025/01/26 21:44:29 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	i = 2;
	count = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
		{
			count++;
		}
		if (count > 2)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int n;
	n = ft_is_prime(2147483647);
	printf("%d", n);
	return (0);
}
