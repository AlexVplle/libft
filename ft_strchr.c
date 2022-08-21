/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:10:07 by avapaill          #+#    #+#             */
/*   Updated: 2022/08/21 11:39:38 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *) s;
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (*str == c)
		return (str);
	return ((void *) 0);
}

int main (int argc, char *argv[])
{
	if (argc == 3) {
		//printf("%s", strchr(argv[1], argv[2][0]));
		printf("%s", ft_strchr(argv[1], argv[2][0]));
	}
	return 0;
}
