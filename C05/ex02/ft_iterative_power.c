/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:58:15 by femontei          #+#    #+#             */
/*   Updated: 2025/01/26 19:22:09 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	i = 1;
	num = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power - 1)
	{
		nb *= num;
		i++;
	}
	return (nb);
}

/*int	main(void)
{
	int n;
	n = ft_iterative_power(5, 3);
	printf("%d", n);
	return (0);
}*/
