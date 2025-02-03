/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:39:41 by femontei          #+#    #+#             */
/*   Updated: 2025/01/20 16:57:32 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] != '\0')
	{
		while (str[i])
		{
			if ((str[i] >= '!' && str[i] <= '~') || str[i] == ' ')
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
	char text[] = "dsadsadsa SDHA";
	int n = ft_str_is_printable(text);
	printf("%d", n);
	return (0);
}*/
