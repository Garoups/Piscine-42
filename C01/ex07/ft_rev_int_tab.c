/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:03:13 by femontei          #+#    #+#             */
/*   Updated: 2025/01/19 18:42:21 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	e;
	int	temp;

	i = 0;
	e = size - 1;
	while (i < e)
	{
		temp = tab[i];
		tab[i] = tab[e];
		tab[e] = temp;
		i++;
		e--;
	}
}

/*int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(arr, 5);
	printf("Revertido: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return (0);
}*/
