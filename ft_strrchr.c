/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:02:03 by avapaill          #+#    #+#             */
/*   Updated: 2022/10/13 23:02:03 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*last_character;

	str = (char *) s;
	last_character = (void *) 0;
	while (*str)
	{
		if (*str == c)
			last_character = str;
		str++;
	}
	if (*str == c)
		last_character = str;
	return (last_character);
}
