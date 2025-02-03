/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 01:29:47 by femontei          #+#    #+#             */
/*   Updated: 2025/01/21 22:08:06 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
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
			else if (str[i] >= 'a' && str[i] <= 'z')
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
	int n;
	char text[] = "";

	n = ft_str_is_alpha(text);
	printf("%d", n);
	return (0);
}*/
