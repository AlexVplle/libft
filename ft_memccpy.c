/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexvpll </var/spool/mail/alexvpll>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:04:08 by alexvpll          #+#    #+#             */
/*   Updated: 2022/10/08 22:45:51 by alexvpll         ###   ########.fr       */
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
