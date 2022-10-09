/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexvpll </var/spool/mail/alexvpll>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:32:10 by alexvpll          #+#    #+#             */
/*   Updated: 2022/10/08 23:53:19 by alexvpll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*new_dest;
	char		*new_src;

	i = 0;
	new_dest = (char *) dest;
	new_src = (char *) src;
	if (new_src < new_dest)
	{
		while (n)
		{
			new_dest[n - 1] = new_src[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			new_dest[i] = new_src[i];
			i++;
		}
	}
	return (new_dest);
}
