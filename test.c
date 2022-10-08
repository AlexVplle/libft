/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:26:19 by avapaill          #+#    #+#             */
/*   Updated: 2022/10/06 17:04:09 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "libft.h"

int testMemset();

int main (int argc, char *argv[])
{
    testMemset();
    return 0;
}


int testMemset()
{
    size_t length = 5;
    void *c = malloc(length);
    if (!c)
        return (0);
    ft_memset(NULL, 9, length);
	memset(NULL, 9, length);
    // for (size_t i = 0; i < length; i++) {
        // printf("%d ", *((unsigned char*) c + i));
    // }
    return 0;
}
