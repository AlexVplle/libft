/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:59:14 by avapaill          #+#    #+#             */
/*   Updated: 2022/10/13 22:59:15 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t maxSize)
{
	size_t			i;
	unsigned char	*new_dest;
	unsigned char	*new_src;

	i = 0;
	new_dest = (unsigned char *) dest;
	new_src = (unsigned char *) src;
	while (i < maxSize)
	{
		new_dest[i] = (char) new_src[i];
		if (new_src[i] == (unsigned char) ch)
			return (&new_dest[i + 1]);
		i++;
	}
	return ((void *) 0);
}
