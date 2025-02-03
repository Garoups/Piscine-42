/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:38:06 by femontei          #+#    #+#             */
/*   Updated: 2025/02/01 15:32:19 by femontei         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	size_t	len;
	int		i;

	i = -1;
	len = 0;
	while (++i < size)
		len += ft_strlen(strs[i]);
	if (size > 0)
		len += ft_strlen(sep) * (size - 1);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	str[len] = '\0';
	return (str);
}

/*int	main(void)	
{
	char *str;
	char *arr[] = {"eu gosto", "muito", "de pudim"};
	str = ft_strjoin(3, arr, " ");
	printf("%s\n", str);
	printf("%d", ft_strlen(str));
	free (str);
	return (0);
}*/
