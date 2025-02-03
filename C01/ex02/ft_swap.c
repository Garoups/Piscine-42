/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 20:11:11 by femontei          #+#    #+#             */
/*   Updated: 2025/01/17 21:05:46 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	num1;
	int	num2;

	num1 = 5;
	num2 = 10;
	printf("Antes: %d %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("Depois: %d %d", num1, num2);
}*/
