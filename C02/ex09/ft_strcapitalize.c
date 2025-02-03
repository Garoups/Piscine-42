/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:55:07 by femontei          #+#    #+#             */
/*   Updated: 2025/01/23 18:51:10 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_up(char str)
{
	if (str >= 'A' && str <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_is_low(char str)
{
	if (str >= 'a' && str <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_is_symbol(char str)
{
	return (!ft_is_up(str) && !ft_is_low(str) && !(str >= '0'
			&& str <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i])
	{
		if (ft_is_symbol(str[i - 1]) && ft_is_low(str[i]))
		{
			str[i] -= 32;
		}
		if (ft_is_up(str[i]) && !ft_is_symbol(str[i - 1]))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	text[] = "ola, tudo bem? 42palavras quar\0enta-e-duas; cinquenta+e+um";
	ft_strcapitalize(text);
	printf("%s", text);
	return (0);
}*/
