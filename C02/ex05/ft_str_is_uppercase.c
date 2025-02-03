/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:27:13 by femontei          #+#    #+#             */
/*   Updated: 2025/01/20 17:21:19 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] != '\0')
	{
		while (str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
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
	char text[] = "DSSNAJDSABDAp";
	int n = ft_str_is_uppercase(text);
	printf("%d", n);
	return (0);
}*/
