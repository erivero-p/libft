/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:58:08 by erivero-          #+#    #+#             */
/*   Updated: 2023/04/19 17:02:21 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	h;

	i = 0;
	j = 0;
	h = 0;
	while (dest[i] != '\0')
		i++;
	while (src[h] != '\0')
		h++;
	if (size <= i)
		h += size;
	else
		h += i;
	while (src[j] != '\0' && size > (i + 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (h);
}

/* #include <string.h> 
#include <stdio.h>

int	main(void)

{
	char	dest[50] = "12345";
	char	src[] = "12345";
	int		size;

	size = 2;
	printf("%zu\n", ft_strlcat(dest, src, size));
	printf("%s\n\n", dest);
	printf("%lu\n", strlcat(dest, src, size));
}
 */