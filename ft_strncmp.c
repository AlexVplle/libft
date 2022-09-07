/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:39:27 by avapaill          #+#    #+#             */
/*   Updated: 2022/09/02 16:48:01 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int	diff;

	i = 0;
	diff = 0;
	while (s1[i] && i < n) {
		if (s1[i] != s2[i]) {
			diff = s2[i] - s1[i];
			break;
		}
		i++;
	}

}
