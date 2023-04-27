/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:47:05 by erivero-          #+#    #+#             */
/*   Updated: 2023/04/20 11:24:51 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)haystack;
	i = 0;
	if (needle[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == needle[j])
		{
			while (str[i + j] == needle[j] && i + j < len)
			{
				j++;
				if (needle[j] == '\0')
					return (&str[i]);
			}	
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[40] = "";
	char to_find[3] = "gg";
	char *x;

	x = ft_strnstr(str, to_find, 0);
	printf("%s\n", x);
	printf("%s\n", strnstr(str, to_find, 0));
	printf("%p\n", x);
	printf("%p", strnstr(str, to_find, 0));
	return (0);
}
 */