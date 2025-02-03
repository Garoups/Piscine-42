/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:38:43 by femontei          #+#    #+#             */
/*   Updated: 2025/01/20 16:18:13 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] != '\0')
	{
		while (str[i])
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				i++;
			}
			else
			{
				return (0);
			}
		}
		return (1);
	}
	return (1);
}

/*int	main(void)
{
	char text [] = "";
	int n = ft_str_is_numeric(text);

	printf("%d", n);
	return (0);
}*/
