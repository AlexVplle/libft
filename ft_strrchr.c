/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:50:49 by avapaill          #+#    #+#             */
/*   Updated: 2022/08/21 12:55:03 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}
