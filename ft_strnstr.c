/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexvpll </var/spool/mail/alexvpll>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:23:32 by alexvpll          #+#    #+#             */
/*   Updated: 2022/10/11 23:02:24 by alexvpll         ###   ########.fr       */
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
