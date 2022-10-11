/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:26:19 by avapaill          #+#    #+#             */
/*   Updated: 2022/10/11 23:33:04 by alexvpll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

#include "libft.h"

int testMemset();
int testBzero();
int testMemcpy();
int testMemmove();
int testMemchr();
int testMemcmp();
int testStrlcpy();
int testStrnstr();
int testAtoi();

int main (int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	// testMemset();
	// testBzero();
	// testMemcpy();
	// testMemmove();
	// testMemchr();
	// testMemcmp();
	// testStrlcpy();
	// testStrnstr();
	testAtoi();
    return 0;
}


int testMemset()
{
    size_t length = 5;
    void *c = malloc(length);
    if (!c)
        return (0);
    memset(c, 9, length);
    // for (size_t i = 0; i < length; i++) {
        // printf("%d ", *((unsigned char*) c + i));
    // }
    free(c);
    return 0;
}

int testBzero()
{
	size_t length = 6;
	void *c = malloc(length);
	if (!c)
		return (0);
	c = strcpy(c, "test1");
	printf("%p\n", (unsigned char*) c);
	ft_bzero(c, 555555555);
	printf("%s\n", (unsigned char*) c);
	free(c);
	return (0);
}

int testMemcpy()
{
    size_t length = 20;
    void *c = malloc(length);
    if (!c)
        return (0);
    char *array = "binjour";
	ft_memccpy(c, array, 'u', length);
	// char *res = ft_memccpy(c, array, 'm', 500000000000);
   printf("%s\n", (unsigned char *) c);
   // printf("%p\n", (unsigned char *) res);
    free(c);
    return 0;
}

int testMemmove() {
	size_t length = 6;
	void *c = malloc(length);
	if (!c)
		return (0);
	char	*array = "";
	memmove(c, "bonjour", length);
	// ft_memmove(c, "bonjoujdlkskjdskl", 10);
	printf("%s\n", (unsigned char *) c);
	return (0);
}

int testMemchr()
{
	printf("%s\n", (unsigned char *) ft_memchr("bonjo", 'o', 6));
	return (0);
}

int testMemcmp()
{
	size_t length = 6;
	void *c = malloc(length);
	if (!c)
		return (0);
	void *d = malloc(length);
	if (!d)
		return (0);
	int e[6] = {1, 2, 3, 4, 5, 6};
	int f[6] = {1, 2, 3, 4, 5, 7};
	printf("%d\n", memcmp(e, f, length));
	printf("%d\n", ft_memcmp(e, f, length));
	return (0);
}

int testStrlcpy()
{
	size_t length = 7;
	const char *c = malloc(length);
	char *d = malloc(length);
	char *f = malloc(length);
	c = "coucou";
	// strlcpy(d, c, 0);
	ft_strlcpy(f, c, 0);
	printf("%s\n", d);
	printf("%s\n", f);
	return 0;
}

int testStrnstr()
{
	printf("%s\n", ft_strnstr("bonjour", "m", 15));
	// printf("%s\n", strnstr("bonjour", "m", 15));
	return (0);
}

int testAtoi()
{
	printf("%d\n", ft_atoi(""));
	return (0);
}
