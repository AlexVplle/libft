/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:39:27 by avapaill          #+#    #+#             */
/*   Updated: 2022/10/05 02:23:29 by alexvpll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		difference;

	difference = 0;
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			difference = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	if (!difference && i < n)
		difference = s1[i] - s2[i];
	return (difference);
}
