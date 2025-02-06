/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:28:52 by femontei          #+#    #+#             */
/*   Updated: 2025/01/28 19:29:51 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(src) + 1;
	copy = (char *)malloc(len);
	if (copy == NULL)
		return (NULL);
	ft_strcpy(copy, src);
	return (copy);
}

int	main(void)
{
	char src[] = "eu gosto de pudim";
	char *copy;
	copy = ft_strdup(src);
	printf("%s", copy);
	free (copy);
	return (0);
}
