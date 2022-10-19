/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:01:57 by avapaill          #+#    #+#             */
/*   Updated: 2022/10/13 23:01:58 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	count;
	size_t	little_length;

	little_length = ft_strlen(little);
	if (!little_length)
		return ((char *) big);
	i = 0;
	count = 0;
	while (i < len)
	{
		if (big[i] == little[count])
			count++;
		else
			count = 0;
		if (count == little_length)
			return ((char *) &big[i - count + 1]);
		i++;
	}
	return ((void *) 0);
}
