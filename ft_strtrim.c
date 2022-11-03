/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:25:03 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/04 00:06:32 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static size_t	trim_one_way(char *s1, char const *set, size_t length_set)
{
	size_t	continue_trim;
	size_t	cursor_set;
	size_t	index;

	continue_trim = 1;
	index = 0;
	while (continue_trim)
	{
		continue_trim = 0;
		cursor_set = 0;
		while (cursor_set < length_set)
		{
			if (set[cursor_set] == s1[index])
			{
				index++;
				continue_trim = 1;
			}
			else
				cursor_set++;
		}
	}
	return (index);
}

static char	*reverse_string(char *str)
{
	size_t	length_str;
	size_t	i;
	char		*reverse_str;

	length_str = ft_strlen(str);
	reverse_str = malloc((length_str + 1) * sizeof(char));
	if (!reverse_str)
		return ((void *) 0);
	while (i < length_str)
	{
		reverse_str[i] = str[length_str - i - 1];
		i++;
	}
	reverse_str[length_str] = '\0';
	return (reverse_str);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char			*new_s1;
	size_t		length_set;
	size_t		length_str;
	unsigned int	start;
	size_t		end;

	new_s1 = (char *) s1;
	length_set = ft_strlen(set);
	length_str = ft_strlen(s1);
	start = trim_one_way((char *) s1, set, length_set);
	(void) start;
	new_s1 = reverse_string(new_s1);
	end = trim_one_way(new_s1, set, length_set);
	return (ft_substr(s1, start, length_str - end - start));
}
