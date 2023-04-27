/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:42:26 by erivero-          #+#    #+#             */
/*   Updated: 2023/04/25 09:19:03 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!*s && (char) c == '\0')
		return ((char *)s);
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0' || c == 1024)
		return ((char *)s);
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *str = "";
	char c = 'a';
	printf ("%s\n", ft_strchr(str, c));
	printf ("%s\n", strchr(str, c));
	return 0;
} */