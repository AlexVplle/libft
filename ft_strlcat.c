/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:01:00 by avapaill          #+#    #+#             */
/*   Updated: 2022/10/13 23:01:15 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	length = ft_strlen(dst);
	i = 0;
	while (length + i + 1 < size && src[i])
	{
		dst[length + i] = src[i];
		i++;
	}
	dst[length + i] = '\0';
	if (length <= size)
		return (length + ft_strlen(src));
	return (size + ft_strlen(src));
}
