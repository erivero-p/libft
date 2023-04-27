/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:36:30 by erivero-          #+#    #+#             */
/*   Updated: 2023/04/19 16:55:58 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;
	size_t		i;

	ptr_dest = (char *)dst;
	ptr_src = (const char *)src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		ptr_dest[i] = (const char)ptr_src[i];
		i++;
	}
	return (dst);
}

/* #include <strings.h>
#include	<stdio.h>
int	main(void)
{
	char	str[10] = "holiwi";
	char	dst[15] = "miimmiasjsjasjaa";
	size_t	len;
	char	*ptr;

	ptr = &str[0];
	len = 4;
	printf("%s", ft_memcpy(dst, ptr, len));
	return 0;
} */