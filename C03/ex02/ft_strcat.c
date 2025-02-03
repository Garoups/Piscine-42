/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:27:47 by femontei          #+#    #+#             */
/*   Updated: 2025/01/22 18:39:20 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;

	i = 0;
	len_dest = 0;
	while (dest[len_dest])
	{
		len_dest++;
	}
	while (src[i])
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
	char dest[50] = "eu gosto de ";

	printf("%s\n", dest);
	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}*/
