/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:20:30 by femontei          #+#    #+#             */
/*   Updated: 2025/01/20 16:26:08 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] != '\0')
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
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
	char text[] = "";
	int n = ft_str_is_lowercase(text);
	printf("%d", n);
	return (0);
}*/
