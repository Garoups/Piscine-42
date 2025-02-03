/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 22:02:07 by femontei          #+#    #+#             */
/*   Updated: 2025/01/21 22:07:29 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char src[] = "Hello, world!";
	char dest[10];
	unsigned int v;

	v = ft_strlcpy(dest, src, 14);
	printf("%s\n", dest);
	printf("Tamanho: %u", v);
	return (0);
}
