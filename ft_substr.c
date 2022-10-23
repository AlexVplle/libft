/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:29:45 by avapaill          #+#    #+#             */
/*   Updated: 2022/10/23 23:06:15 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	length_word;
	size_t	length_substring;
	char	*dest;

	length_word = ft_strlen(s);
	length_substring = length_word - start + 1;
	if (length_substring > len)
		length_substring = len;
	dest = (char *) malloc(length_substring * sizeof(char));
	if (!dest)
		return ((void *) 0);
	return (ft_strncpy(dest, (char *) s + start, length_substring));
}
