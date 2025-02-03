/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:17:06 by femontei          #+#    #+#             */
/*   Updated: 2025/01/22 19:12:40 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_count_src(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_count_dest(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	len_dest = ft_count_dest(dest);
	len_src = ft_count_src(src);
	if (size <= len_dest)
		return (size + len_src);
	while (src[i] && len_dest + i < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}

/*int	main(void)
{
	char src[] = "Born to code";
	char dest[] = "1337 42";
	unsigned int n;

	n = ft_strlcat(dest, src, 14);
	printf("%s\n", dest);
	printf("%d\n", n);
	return (0);
}*/
