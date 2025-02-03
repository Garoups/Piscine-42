/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:51:18 by femontei          #+#    #+#             */
/*   Updated: 2025/01/23 00:04:30 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (str + i);
			}
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("%p\n", ft_strstr("hello, world", "world"));
	printf("%p\n", ft_strstr("hello, world", "haha"));
	printf("%p\n", ft_strstr(" ", " "));
	printf("%p\n", ft_strstr("hello, world", ""));
	printf("%p", strstr("hello, world", "world"));

	return (0);
}*/
