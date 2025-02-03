/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:53:35 by femontei          #+#    #+#             */
/*   Updated: 2025/01/22 18:40:15 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len_dest;

	i = 0;
	len_dest = 0;
	while (dest[len_dest])
	{
		len_dest++;
	}
	while (src[i] && i < nb)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char src[] = "pudim";
	char dest[] = "eu gosto de ";

	printf("%s\n", dest);
	ft_strncat(dest, src, 5);
	printf("%s", dest);
	return (0);
}*/
