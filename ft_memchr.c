/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexvpll </var/spool/mail/alexvpll>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:13:03 by alexvpll          #+#    #+#             */
/*   Updated: 2022/10/09 01:50:14 by alexvpll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*new_s;

	i = 0;
	new_s = (unsigned char *) s;
	while (i < n)
	{
		if (new_s[i] == (unsigned char) c)
			return (new_s + i);
		i++;
	}
	return ((void *) 0);
}
